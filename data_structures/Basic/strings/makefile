SHELL := /bin/sh
CC = gcc
CFLAGS = -Wall -Wpedantic -Werror -Wextra -std=c17

all: hello_world

hello_world: hello_world.c
	$(CC) $(CFLAGS) hello_world.c -o hello_world

clean:
	rm -f hello_world
