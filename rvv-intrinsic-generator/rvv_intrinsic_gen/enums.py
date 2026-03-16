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

This file stores enum classes and InstInfo that collects them.
"""
import enum

from enum import unique


# First letter of InstType is return type.
class InstType(enum.Enum):
  """
  Enum of instruction mnemonics.
  """
  V = 0
  X = 1
  F = 2
  I = 3

  VV = 11
  VX = 12
  VF = 13
  VM = 14
  XV = 15
  FV = 16
  VI = 17

  VVV = 21
  VVX = 22
  VVF = 23
  VXX = 24
  VVI = 25

  VVVM = 31
  VVXM = 32
  VVFM = 33

  WVV = 41
  WVX = 42
  WVF = 43
  WVI = 44
  WWV = 45
  WWX = 46
  WWF = 47

  WV = 51
  QV = 52
  OV = 53

  VWV = 61
  VWX = 62
  VWF = 63

  MM = 71
  MMM = 72

  V1VV1 = 81
  W1VW1 = 82

  SETVL = 100
  SETVLMAX = 101
  REINT = 102
  VUNDEF = 103
  LMUL_EXT = 104
  LMUL_TRUNC = 105
  VGET = 106
  VSET = 107
  VCREATE = 108

  UNKNOWN = -1


class MemType(enum.Enum):
  """
  Enum of memory instruction type.
  """
  NO_MEM = 0
  LOAD = 1
  STORE = 2
  AMO = 3


@unique
class ToolChainType(enum.Enum):
  """
  Enum of the target toolchian of the intrinsic test files.
  """
  UNKNOWN = "unknown"
  LLVM = "llvm"
  GNU = "gnu"


class ExtraAttr:
  """
  Enum of extra attributes of the intrinsic.
  """
  NO_ATTR = 0
  MAC = 1 << 0
  REDUCE = 1 << 1
  MERGE = 1 << 2
  CONVERT = 1 << 3
  INT_EXTENSION = 1 << 4
  FIRST_FAULT = 1 << 5
  IS_MASK = 1 << 6
  NEED_MASKOFF = 1 << 7
  NEED_MERGE = 1 << 8
  IS_TA = 1 << 9  # for 0.10 (LegacyIntrinsicDecorator)
  IS_TU = 1 << 10
  IS_TAMA = 1 << 11  # for 0.10 (LegacyIntrinsicDecorator)
  IS_TAMU = 1 << 12
  IS_TUMA = 1 << 13
  IS_TUMU = 1 << 14
  IS_MA = 1 << 15
  IS_MU = 1 << 16
  IS_RED_TUMA = 1 << 17
  IS_RED_TAMA = 1 << 18  # for 0.10 (LegacyIntrinsicDecorator)
  HAS_VXRM = 1 << 19
  HAS_FRM = 1 << 20


class InstInfo:
  """
  Structure that stores the information of the intrinsic.
  """

  def __init__(self,
               SEW,
               LMUL,
               OP,
               inst_type=InstType.UNKNOWN,
               mem_type=MemType.NO_MEM,
               extra_attr=ExtraAttr.NO_ATTR,
               NF=1,
               required_ext=None):
    #pylint: disable=invalid-name
    self.SEW = SEW
    self.LMUL = LMUL
    self.OP = OP
    self.inst_type = inst_type
    self.mem_type = mem_type
    self.extra_attr = extra_attr
    self.NF = NF
    if required_ext is None:
      required_ext = []
    self.required_ext = sorted(required_ext)

  def load_p(self):
    return self.mem_type == MemType.LOAD

  def store_p(self):
    return self.mem_type == MemType.STORE

  def mem_p(self):
    return self.load_p() or self.store_p()

  @staticmethod
  def get(args,
          decorator,
          inst_type,
          mem_type=MemType.NO_MEM,
          extra_attr=ExtraAttr.NO_ATTR,
          required_ext=None,
          is_compute=None):
    if decorator is None:
      # vsetvl and vsetvlmax
      inst_info = InstInfo(
          args["SEW"],
          args["LMUL"],
          args["OP"],
          inst_type,
          mem_type,
          extra_attr,
          required_ext=required_ext)
    elif "SEW" in args:
      if "NF" in args:
        inst_info = InstInfo(
            args["SEW"],
            args["LMUL"],
            args["OP"],
            inst_type,
            mem_type,
            extra_attr | decorator.flags,
            args["NF"],
            required_ext=required_ext)
      else:
        inst_info = InstInfo(
            args["SEW"],
            args["LMUL"],
            args["OP"],
            inst_type,
            mem_type,
            extra_attr | decorator.flags,
            required_ext=required_ext)
    else:
      # For mask operation
      inst_info = InstInfo(
          0,
          0,
          args["OP"],
          inst_type,
          mem_type,
          extra_attr | decorator.flags,
          required_ext=required_ext)
    # Auto-derive type-based extension requirements
    if is_compute is not None:
      data_type = args.get("TYPE")
      sew = args.get("SEW")
      if data_type and sew:
        from utils import add_type_ext
        add_type_ext(inst_info, data_type, sew, is_compute)
    return inst_info

  def get_required_exts(self) -> list:
    return sorted(self.required_ext)

  def add_required_ext(self, ext: str) -> None:
    if ext not in self.required_ext:
      self.required_ext.append(ext)

  def remove_required_ext(self, ext: str) -> None:
    if ext in self.required_ext:
      self.required_ext.remove(ext)
