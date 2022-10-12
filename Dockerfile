FROM alpine:latest
WORKDIR /git
RUN apk add --no-cache ncurses-dev git g++
RUN git clone https://github.com/aerphanas/keycode.git
RUN g++ ./keycode/src/keycode.cpp -lncurses -o keycode.o
CMD ["./keycode.o"]