mkdir vego

cd vego

mkdir bin
mkdir downloads
mkdir my_game

curl -L -o downloads\mingw.7z https://github.com/niXman/mingw-builds-binaries/releases/download/14.2.0-rt_v12-rev2/x86_64-14.2.0-release-win32-seh-ucrt-rt_v12-rev2.7z
curl -L -o downloads\cmake3.zip https://github.com/Kitware/CMake/releases/download/v3.31.7/cmake-3.31.7-windows-x86_64.zip
curl -L -o downloads\vego_template.tar.gz https://github.com/VEGO-Engine/Project_Template/releases/download/0.2.x/vego_template.tar.gz
curl -L -o bin\7zr.exe https://www.7-zip.org/a/7zr.exe

bin\7zr.exe x downloads\mingw.7z -obin
tar -xzf downloads\vego_template.tar.gz -C my_game --strip-components 1
tar -xf downloads\cmake3.zip -C bin

set PATH=%cd%\bin\mingw64\bin;%cd%\bin\mingw64\x86_64-w64-mingw32\bin;%cd%\bin\cmake-3.31.7-windows-x86_64\bin;%PATH%

cmake -S my_game -B my_game\build -G "MinGW Makefiles"

pause