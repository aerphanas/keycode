# **KeyCode**  
[![Author](https://img.shields.io/badge/author-aerphanas-blue.svg)](https://github.com/aerphanas)
[![Software License](https://img.shields.io/badge/license-GNU_GPLv3-brightgreen.svg)](https://gitlab.com/Kuroyasha512/keycode#license)
[![CMake](https://github.com/aerphanas/keycode/actions/workflows/cmake.yml/badge.svg)](https://github.com/aerphanas/keycode/actions/workflows/cmake.yml)


Get Keycode From keyboard,useful when you want remap your keyboard

## **Setup**
**use binary**  
```sh
./keycode(tui)
./keycode -v $(your char) (get opt)
```  

## **Compile From Source**

Prerequisites :
- ncurses  
- gcc  
- cmake  
```sh
# install git,ncurses and gcc with your favorite package control (xbps/apt/aptget/etc)  
git clone https://gitlab.com/Kuroyasha512/keycode.git  
cd keycode  
cd <Release/Debug>
cmake -DCMAKE_BUILD_TYPE=<Debug/Relese> ..
# example : cmake -DCMAKE_BUILD_TYPE=Debug ..
make
```
