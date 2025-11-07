TARGET = hello control main 
CC = gcc
CFLAGS = -Wall -O2

all: $(TARGET)

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

control: control.c
	$(CC) $(CFLAGS) -o control control.c

main: main.c calc.h
	$(CC) $(CFLAGS) -o main main.c calc.c

clean:
	rm -f $(TARGET)