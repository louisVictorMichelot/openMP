# openMP
me trying to learn openMP

/

setup xcode openMP

/

macOS 12.1

Xcode 13.2.1

Clang 13.0.1

/
 
//terminal

brew install wget

brew install llvm

/

//build settings

Enable Index-While-Building Functionality : No

Header Search Paths : /usr/local/opt/llvm/lib/clang/13.0.1/include

Library Search Paths : /usr/local/opt/llvm/lib

Other C Flags : -fopenmp

Enable Module : No

//Editor/Add Build Setting/Add User-Defined Setting/"CC" : /usr/local/opt/llvm/bin/clang


/

//build phases

Link Binary With Libraries : libomp.dylib

/
