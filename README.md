# **KeyCode**  
[![Author](https://img.shields.io/badge/author-Kuroyasha512-blue.svg)](https://gitlab.com/Kuroyasha512)
[![Source Code](https://img.shields.io/badge/source-Kuroyasha512/keycode-blue.svg)](https://gitlab.com/Kuroyasha512/keycode/tree/master/source)
[![Software License](https://img.shields.io/badge/license-GNU_GPLv3-brightgreen.svg)](https://gitlab.com/Kuroyasha512/keycode#license)
[![Current](https://img.shields.io/badge/current-V1.1-2--.svg)](https://gitlab.com/Kuroyasha512/keycode/releases)
[![Status](https://img.shields.io/badge/Status-Development-red.svg)](https://gitlab.com/Kuroyasha512/keycode/blob/master/README.md)
[![os](https://img.shields.io/badge/os-GNU/Linux-red.svg)](https://www.gnu.org/gnu/linux-and-gnu.en.html)

Get Keycode From keyboard

## **Setup**
**use binary**  
```sh
git clone https://gitlab.com/Kuroyasha512/keycode.git
cd keycode
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
```sh
# install git,ncurses and gcc with your favorite package control (xbps/apt/aptget/etc)
git clone https://gitlab.com/Kuroyasha512/keycode.git
cd keycode
g++ ./source/keycode.cpp -o keycode -l ncurses
```
**(Optional) to make Program Use library in lib folder use patchelf**  
```sh
patchelf --set-rpath ./lib/ ./keycode
# and set interpreter with
patchelf --set-interpreter ./lib/ld-linux.so.2 ./keycode
```


## **License**

This project is licensed under the GNU GPLv3 License - see the [LICENSE](https://gitlab.com/Kuroyasha512/keycode/blob/master/LICENSE) file for details

### **Philosophy**
My program use Unix Philosophy :  
The UNIX philosophy is documented by Doug McIlroy in the Bell System Technical Journal from 1978  
1. Make each program do one thing well. To do a new job, build afresh rather than complicate old programs by adding new "features".
2. Expect the output of every program to become the input to another, as yet unknown, program. Don't clutter output with extraneous information. Avoid stringently columnar or binary input formats. Don't insist on interactive input.
3. Design and build software, even operating systems, to be tried early, ideally within weeks. Don't hesitate to throw away the clumsy parts and rebuild them.
4. Use tools in preference to unskilled help to lighten a programming task, even if you have to detour to build the tools and expect to throw some of them out after you've finished using them.