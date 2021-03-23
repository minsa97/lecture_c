CC=gcc
LIB=libmyfunc.a
OBJS=func1.o func2.o
CFLAGS=-Wall

$(LIB): $(OBJS)
	$(AR) rv $@ $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) -I../include $< -o $@

clean:
	rm -f $(OBJS) $(LIB)