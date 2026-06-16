"""
--------------------------------------------------------------------------------
Copyright 2023 SiFive Inc

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

Script to run clang-format to auto-generated adoc files.
"""

import sys
from subprocess import call
import argparse
import os
import tempfile

def run_clang_format(text) :
  temp = tempfile.NamedTemporaryFile()

  # Fill text into temp file
  with open(temp.name, 'w') as tmp:
    tmp.write(text)

  # Run clang-format
  command = ["clang-format","-i", temp.name]
  try:
    retcode = call(command)
    if retcode != 0:
      sys.exit(1)
  except FileNotFoundError:
    temp.close()
    return text

  # Go back to beginning and read data
  with open(temp.name, 'r') as tmp:
    formatted_text = tmp.read()

  temp.close()
  return formatted_text

def process_content(content):
  formatted_content = ""

  # Flag to capture first "----"
  met_start = False
  # Snippet to run clang-format
  snippet = ""
  for line in content.splitlines():
    if line == "[,c]":
      continue

    elif line == "----":
      if met_start:
        formatted_snippet = run_clang_format(snippet)
        formatted_content += "[,c]\n----\n" + formatted_snippet + "----\n"
        met_start = False
        snippet = ""
      else :
        met_start = True
    else :
      if met_start:
        snippet += line + "\n"
      else:
        formatted_content += line + "\n"

  return formatted_content

def process_file(file_path) :
  # Read content from file
  with open(file_path, 'r') as file:
    content = file.read()

  formatted_content = process_content(content)

  # Rewrite with formatted content
  with open(file_path, 'w') as file:
    file.write(formatted_content)

  print(f"Processed file {file_path}.")

def main ():
  parser = argparse.ArgumentParser()
  parser.add_argument("--file")
  parser.add_argument("--folder")

  args = parser.parse_args()

  if args.file is not None and args.folder is not None :
    print("--file and --folder do not work together.")
    sys.exit(1)
  
  if args.file is not None :
    if not os.path.isfile(args.file):
      print("File does not exist in path of --file, ignoring the option")
      return None
    process_file(args.file)
    sys.exit(0)
    
  if args.folder is not None:
    if not os.path.isdir(args.folder):
      print("Directory does not exist in path of --folder, ignoring the option")
      return None
    for file_name in os.listdir(args.folder):
      file_path = os.path.join(args.folder, file_name)
      if os.path.isfile(file_path):
        process_file(file_path)
    sys.exit(0)
  
  print("Use --file or --folder to specify path for formatting")

if __name__ == "__main__":
  if not (sys.version_info.major == 3 and sys.version_info.minor >= 6):
    print("This script requires Python 3.6 or higher!")
    sys.exit(1)
  main()
