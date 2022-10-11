# **KeyCode**  
[![Author](https://img.shields.io/badge/author-aerphanas-blue.svg)](https://github.com/aerphanas)
[![Software License](https://img.shields.io/badge/license-GNU_GPLv3-brightgreen.svg)](https://gitlab.com/Kuroyasha512/keycode#license)
[![Current](https://img.shields.io/badge/current-V1.1-2--.svg)](https://gitlab.com/Kuroyasha512/keycode/releases)

Get Keycode From keyboard,useful when you want remap your keyboard

## **Setup**
**use binary**  
```sh
./keycode(tui)
./keycode -v $(your char) (get opt)
```  
install via dpkg*
```sh
# download deb file from https://gitlab.com/Kuroyasha512/keycode/releases
sudo dpkg -i KeyCode_<major version>.<minor version>-<package revision>.deb
```

## **Compile From Source**

***Prerequisites :**  
- ncurses  
- gcc  
- cmake  
- minimum cols & lines in terminal is 26 and 13  
** Check cols & lines on terminal : **  
cols = ```tput cols```  
lines = ```tput lines```
```sh
# install git,ncurses and gcc with your favorite package control (xbps/apt/aptget/etc)  
git clone https://gitlab.com/Kuroyasha512/keycode.git  
cd keycode  
cd <Release/Debug>
cmake -DCMAKE_BUILD_TYPE=<Debug/Relese> ..
# example : cmake -DCMAKE_BUILD_TYPE=Debug ..
make
```

**(Info) to make Program Use library in lib folder use patchelf**  
```sh
patchelf --set-rpath <lib> <obj>
# and also you can set interpreter with
patchelf --set-interpreter <interpreter> <obj>
```

## **License**

This project is licensed under [![LICENSE](https://www.gnu.org/graphics/gplv3-with-text-84x42.png)](https://gitlab.com/Kuroyasha512/keycode/blob/master/LICENSE) - see the [LICENSE](https://gitlab.com/Kuroyasha512/keycode/blob/master/LICENSE) file for details
