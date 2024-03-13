from os import walk
import shutil

import glob
files = glob.glob("*/**/Makefile", recursive=True)
for f in files:
    print(f)
    shutil.copy('Makefile', f)

# files = glob.glob("*/**/.vscode/settings.json", recursive=True)
# for f in files:
#     print(f)
#     shutil.copy('settings.json', f)

# print(f)

# files = glob.glob("*/**/*.cpp.bak.cpp", recursive=True)
# for f in files:
#     fnew = f.replace(".cpp.bak.cpp", ".cpp.bak")
#     print(fnew)
#     shutil.move(f, fnew)

# w = walk(".")
# for (dirpath, dirnames, filenames) in w:
#     if ".vscode" in dirnames:
#         print(dirpath)
#         shutil.copy('.clang-format', dirpath + "/.clang-format")
    