# **KeyCode**
[![Author](https://img.shields.io/badge/author-aerphanas-red.svg)](https://github.com/aerphanas)
[![Build-Test](https://github.com/aerphanas/keycode/actions/workflows/action.yml/badge.svg)](https://github.com/aerphanas/keycode/actions/workflows/action.yml)

Get Keycode From keyboard
## **Setup**
**binary**
```sh
./keycode(tui)
./keycode -v $(your char) (get opt)
```

**Docker**
```sh
docker build -t keycode . # build docker image
docker run -it keycode # run docker image interactively
```

## **Compile From Source**

Prerequisites :
- ncurses
- gcc/g++
- libstdc++
```sh
# install git,ncurses and gcc with your favorite package control (xbps/apt/aptget/etc)
git clone https://gitlab.com/Kuroyasha512/keycode.git
cd keycode
cd src
g++ ./keycode/src/keycode.cpp -lncurses -o keycode.o
```
