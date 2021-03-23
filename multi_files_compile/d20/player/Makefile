CC=gcc
CFLAGS=-Wall
EXEC=main

$(EXEC): main.o
	$(CC) -o main main.o -L../lib -lmyfunc

%.o: %.c
	$(CC) -c $(CFLAGS) -I../include $< -o $@ 

clean:
	rm main.o main
