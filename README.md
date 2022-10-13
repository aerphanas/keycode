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
docker pull aerphanas/keycode:latest # pull docker image from docker hub
docker run -it keycode:latest # run docker image interactively
```

## **Compile From Source**

Prerequisites :
- ncurses
- gcc
- libstdc++
- git
```sh
# install git,ncurses and gcc with your favorite package control (xbps/apt/aptget/etc)
git clone https://gitlab.com/Kuroyasha512/keycode.git
cd keycode
cd src
g++ ./keycode/src/keycode.cpp -lncurses -o keycode.o
```

## **Build with Dockerfile**

```sh
git clone https://gitlab.com/Kuroyasha512/keycode.git
docker build -t keycode:latest . # build docker image
docker run -it keycode:latest # run docker image interactively

```