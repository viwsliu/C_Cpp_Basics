SHELL := /bin/sh
CC = gcc
CFLAGS = -Wall -Wpedantic -Werror -Wextra -std=c17

all: array two_dim_matrix

array: array.c
	$(CC) $(CFLAGS) array.c -o array

matrix: two_dim_matrix.c
	$(CC) $(CFLAGS) two_dim_matrix.c -o two_dim_matrix

run-array: array
	./array

run-two_dim_matrix: two_dim_matrix
	./two_dim_matrix

clean:
	rm -f array two_dim_matrix
