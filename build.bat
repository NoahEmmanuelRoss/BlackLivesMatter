@echo off

set compiler_options = /Zi
set linker_options = User32.lib

IF NOT EXIST build mkdir build
pushd build
cl /Zi ../src/main.c /link %linker_options% /out:app.exe
popd