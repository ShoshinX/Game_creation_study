@echo off
mkdir ..\..\..\build
pushd ..\..\..\build
clang-cl -Zi -m64 ..\game_creation_study\2d_rogue\code\win32_rogue.cpp
popd
