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
docker run -it keycode:latest -v $(your char) # to get key without tui
```

## **Compile From Source**

Prerequisites :

- ncurses
- gcc
- pkg-config

```sh
gcc ./keycode/src/main.c -o keycode.o `pkg-config --cflags --libs ncurses`
```
