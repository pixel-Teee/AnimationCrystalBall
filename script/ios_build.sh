#！/bin/sh
cd ..
mkdir build
cd build
cmake .. -G Xcode -DCMAKE_TOOLCHAIN_FILE=../script/ios.toolchain.cmake -DPLATFORM=OS64COMBINED

