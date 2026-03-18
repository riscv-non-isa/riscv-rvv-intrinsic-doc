"""
--------------------------------------------------------------------------------
Copyright 2022 SiFive Inc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
--------------------------------------------------------------------------------

Utility on handling RVV types
"""

import itertools
import re

ELEN = 64


# ex. f8 -> 0.125
def get_float_lmul(num):
  if isinstance(num, str) and num[0] == "f":
    return float(1 / float(num[1:]))
  else:
    return float(num)


# ex. 0.125 -> f8
def get_string_lmul(num, factor):
  result = get_float_lmul(num) * factor
  if result < 1.0:
    return f"f{int(1 / result)}"
  else:
    return int(result)


class TypeHelper:
  """
  The 'TypeHelper' class provides appropriate types for function parameters and
  return type.
  """
  size_t = "size_t"
  void = "void"
  intptr_t = "intptr_t"
  ptrdiff_t = "ptrdiff_t"
  ulong = "unsigned long"
  uint = "unsigned int"
  long = "long"
  boolean = "uint8_t"
  const_int = "const int"
  int = "int"

  def __init__(self, **kargs):
    self.args = kargs
    if "TYPE" not in self.args:
      return
    self.args["WTYPE"] = self.args["TYPE"]
    if self.args["TYPE"] == "bfloat":
      self.args["WTYPE"] = "float"

  @property
  def get_float_lmul(self):
    lmul = self.args["LMUL"]
    return get_float_lmul(lmul)

  def get_elmul(self, eew, sew):
    elmul = (eew / sew) * get_float_lmul(self.args["LMUL"])
    if elmul > 8.0 or elmul < (1 / 8):
      return 0
    return elmul

  @property
  def mlen(self):
    if "MLEN" in self.args:
      return self.args["MLEN"]
    else:
      return int(self.args["SEW"] / self.get_float_lmul)

  @property
  def m(self):
    if "MLEN" in self.args:
      return f"vbool{self.args['MLEN']}_t"
    else:
      return f"vbool{int(self.args['SEW'] / self.get_float_lmul)}_t"

  def valid_vtype(self, vtype):
    p = "v(bool|int|uint|float|bfloat)(?P<SEW>[0-9]+)m(?P<LMUL>f?[0-9])_t"
    i = re.match(p, vtype)
    if i is None:
      return False
    sew = i.group("SEW")
    lmul = i.group("LMUL")
    # assume ELEN = 64
    if vtype[:6] == "vfloat":
      if sew not in ["16", "32", "64"]:
        return False
    elif vtype[:7] == "vbfloat":
      if sew not in ["16"]:
        return False
    else:
      if sew not in ["8", "16", "32", "64"]:
        return False
    if lmul not in ["f8", "f4", "f2", "1", "2", "4", "8"]:
      return False
    if get_float_lmul(lmul) < int(sew) / ELEN:
      return False
    return True

  @property
  def v(self):
    return "v{TYPE}{SEW}m{LMUL}_t".format_map(self.args)

  @property
  def tuple_v(self):
    return "v{TYPE}{SEW}m{LMUL}x{NF}_t".format_map(self.args)

  @property
  def vm1(self):
    return "v{TYPE}{SEW}m1_t".format_map(self.args)

  @property
  def uiv(self):
    return "vuint{SEW}m{LMUL}_t".format_map(self.args)

  @property
  def siv(self):
    return "vint{SEW}m{LMUL}_t".format_map(self.args)

  @property
  def s(self):
    if self.args["TYPE"] == "float":
      if self.args["SEW"] == 16:
        return "_Float16"
      elif self.args["SEW"] == 32:
        return "float"
      elif self.args["SEW"] == 64:
        return "double"
      else:
        assert False, "Unhandled SEW under float type"
    if self.args["TYPE"] == "bfloat":
      assert self.args["SEW"] == 16, "BFloat16 only, no other SEW allowed"
      return "__bf16"
    return "{TYPE}{SEW}_t".format_map(self.args)

  @property
  def uis(self):
    return "uint{SEW}_t".format_map(self.args)

  @property
  def sis(self):
    return "int{SEW}_t".format_map(self.args)

  @property
  def wv(self):
    return "v{WTYPE}{WSEW}m{WLMUL}_t".format_map(self.args)

  @property
  def swiv(self):
    return "vint{WSEW}m{WLMUL}_t".format_map(self.args)

  @property
  def uwiv(self):
    return "vuint{WSEW}m{WLMUL}_t".format_map(self.args)

  @property
  def wvm1(self):
    return "v{WTYPE}{WSEW}m1_t".format_map(self.args)

  @property
  def ws(self):
    return "{WTYPE}{WSEW}_t".format_map(self.args)

  @property
  def qv(self):
    return "v{TYPE}{QSEW}m{QLMUL}_t".format_map(self.args)

  @property
  def ov(self):
    return "v{TYPE}{OSEW}m{OLMUL}_t".format_map(self.args)


def get_data_ext(data_type, sew):
  """Return required extensions for data movement ops (load/store/move/etc)."""
  if data_type == "float":
    if sew == 16:
      return ["zvfhmin"]
    elif sew == 32:
      return ["zve32f"]
    elif sew == 64:
      return ["zve64d"]
  elif data_type in ("int", "uint"):
    if sew == 64:
      return ["zve64x"]
  return []


def get_compute_ext(data_type, sew):
  """Return required extensions for compute ops (arithmetic/compare/etc)."""
  if data_type == "float":
    if sew == 16:
      return ["zvfh"]
    elif sew == 32:
      return ["zve32f"]
    elif sew == 64:
      return ["zve64d"]
  elif data_type in ("int", "uint"):
    if sew == 64:
      return ["zve64x"]
  return []


def add_type_ext(inst_info, data_type, sew, is_compute=False):
  """Add type-based extension requirements to an InstInfo object."""
  if is_compute:
    exts = get_compute_ext(data_type, sew)
  else:
    exts = get_data_ext(data_type, sew)
  for ext in exts:
    inst_info.add_required_ext(ext)


def seg_constraint(**kargs):
  return ((get_float_lmul(kargs["LMUL"]) * kargs["NF"])
          <= 8) and basic_constraint(**kargs)


def seg_arg(v, nf, ptr_t=False, is_seg_load_store_tuple_type=False):
  args = {}
  if is_seg_load_store_tuple_type:
    if ptr_t:
      args["vs3"] = f"{v.split('_')[0]}x{nf}_t *"
    else:
      args["vs3"] = f"{v.split('_')[0]}x{nf}_t"
  else:
    for i in range(nf):
      if ptr_t:
        vt = f"{v} *"
      else:
        vt = v
      args[f"vs3_{i}"] = vt
  return args


def basic_constraint(**kargs):
  if "TYPE" in kargs:
    if kargs["TYPE"] == "float" and kargs["SEW"] == 8:
      return False
  if "SEW" in kargs and "LMUL" in kargs and kargs["SEW"] is not None and kargs[
      "LMUL"] is not None:
    if "TYPE" not in kargs:
      kargs["TYPE"] = "int"
    type_helper = TypeHelper(**kargs)
    if not type_helper.valid_vtype(type_helper.v):
      return False
  return True


# Return list of dict
# prod(a=[1,2], b=[4,5])
# return [{a:"1", b : "4"}, {a:"1", b : "5"},
#         {a:"2", b : "4"}, {a:"2", b : "5"}]
def prod(constraint=basic_constraint, **kargs):
  for k, v in kargs.items():
    if len(v) == 0:
      kargs[k] = [None]
  result = []
  for i in itertools.product(*kargs.values()):
    temp = dict(zip(kargs.keys(), i))
    for k in ["LMUL", "SEW"]:
      if k in temp and temp[k]:
        temp["W" + k] = get_string_lmul(temp[k], 2)
        temp["Q" + k] = get_string_lmul(temp[k], 4)
        temp["O" + k] = get_string_lmul(temp[k], 8)
        temp["N" + k] = get_string_lmul(temp[k], 0.5)
        temp["L" + k] = get_string_lmul(temp[k], 0.25)
    if constraint(**temp):
      result.append(temp)

  # Put float in front of int
  if "TYPE" in result[0]:
    result = sorted(result, key=lambda d: d["TYPE"])

  return result
