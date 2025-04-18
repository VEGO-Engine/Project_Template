mkdir vego\bin
mkdir vego\downloads

curl -L -o vego\Tiled-1.11.2.msi https://github.com/mapeditor/tiled/releases/download/v1.11.2/Tiled-1.11.2_Windows-10+_x86_64.msi

curl -L -o vego\downloads\mingw.7z https://github.com/niXman/mingw-builds-binaries/releases/download/14.2.0-rt_v12-rev2/x86_64-14.2.0-release-win32-seh-ucrt-rt_v12-rev2.7z
curl -L -o vego\downloads\cmake3.zip https://github.com/Kitware/CMake/releases/download/v3.31.6/cmake-3.31.6-windows-x86_64.zip
curl -L -o vego\bin\git.exe https://github.com/git-for-windows/git/releases/download/v2.49.0.windows.1/PortableGit-2.49.0-64-bit.7z.exe
curl -L -o vego\bin\7zr.exe https://www.7-zip.org/a/7zr.exe

vego\bin\7zr.exe x vego\downloads\mingw.7z -ovego\bin
tar -xf vego\downloads\cmake3.zip -C vego\bin

vego\bin\PortableGit\bin\git.exe clone --recursive -j8 https://github.com/VEGO-Engine/Project_Template.git vego\my_game
vego\bin\cmake-3.31.6-windows-x86_64\bin\cmake.exe -S vego\my_game -B vego\my_game\build -G "MinGW Makefiles" -DCXX_COMPILER=vego\bin\mingw64\bin\g++.exe

echo Setup completed successfully!
