TARGET = main
CC = gcc
CFLAGS = -Wall -O2

all: $(TARGET)

main: main.c sum.h
	$(CC) $(CFLAGS) -o main main.c sum.c

clean:
	rm -f $(TARGET)