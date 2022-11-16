FROM alpine:latest
LABEL org.opencontainers.image.source=https://github.com/aerphanas/keycode
LABEL org.opencontainers.image.description="Fast Simple KeyCode Grabber writen in C++"
WORKDIR /git
RUN apk add --no-cache ncurses-dev git g++ libstdc++ \
    && git clone https://github.com/aerphanas/keycode.git \
    && g++ ./keycode/src/keycode.cpp -lncurses -o keycode.o \
    && apk del git g++
ENTRYPOINT [ "./keycode.o" ]
CMD ["./keycode.o", "-v"]
