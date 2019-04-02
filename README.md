[![Author](http://img.shields.io/badge/author-Kuroyasha512-blue.svg)](https://gitlab.com/Kuroyasha512)
[![Source Code](http://img.shields.io/badge/source-Kuroyasha512/keycode-blue.svg)](https://gitlab.com/Kuroyasha512/rdbms-tui/tree/master/Source)  
[![Software License](https://img.shields.io/badge/license-GNU_GPLv3-brightgreen.svg)](https://gitlab.com/Kuroyasha512/rdbms-tui/edit/master/README.md#license)
[![Status](https://img.shields.io/badge/Status-Stable-green.svg)](https://gitlab.com/Kuroyasha512/keycode/edit/master/README.md#info-status)



# **KeyCode**

Get Keycode From keyboard

## **Compile From Source**

**Prerequisites :**
- ncurses
- gcc

**step 0** install git and ncurses with your favorite package control (xbps/apt/aptget/etc)  
**Step 1** `git clone https://gitlab.com/Kuroyasha512/keycode.git`  
**step 2** 'g++ ./source/keycode.cpp -o keycode -l ncurses'  

**(Optional) to make Program Use library in lib folder use patchelf**  
`patchelf --set-rpath ./lib/ ./keycode`  
and set interpreter with  
`patchelf --set-interpreter ./lib/ld-linux.so.2 ./keycode`


## **License**

This project is licensed under the GNU GPLv3 License - see the [LICENSE.md](https://gitlab.com/Kuroyasha512/keycode/blob/master/LICENSE) file for details

### **Philosophy**
My program use Unix Philosophy :  
The UNIX philosophy is documented by Doug McIlroy in the Bell System Technical Journal from 1978  
1. Make each program do one thing well. To do a new job, build afresh rather than complicate old programs by adding new "features".
2. Expect the output of every program to become the input to another, as yet unknown, program. Don't clutter output with extraneous information. Avoid stringently columnar or binary input formats. Don't insist on interactive input.
3. Design and build software, even operating systems, to be tried early, ideally within weeks. Don't hesitate to throw away the clumsy parts and rebuild them.
4. Use tools in preference to unskilled help to lighten a programming task, even if you have to detour to build the tools and expect to throw some of them out after you've finished using them.