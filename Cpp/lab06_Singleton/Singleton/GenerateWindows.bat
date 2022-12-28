@echo off

mkdir msvc
cd msvc
cmake .. -G "Visual Studio 16 2019" -A x64

if errorlevel == 1 (
    echo CMake Error. Failure Reason Given is %errorlevel%
    cd ..
    exit /b %errorlevel%
)
cd ..

