FROM alpine:latest
WORKDIR /git
RUN apk add --no-cache ncurses-dev git g++ libstdc++ \
    && git clone https://github.com/aerphanas/keycode.git \
    && g++ ./keycode/src/keycode.cpp -lncurses -o keycode.o \
    && apk del git g++
CMD ["./keycode.o"]