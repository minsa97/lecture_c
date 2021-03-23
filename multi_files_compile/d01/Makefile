CC =  gcc
CFLAGS = -W -Wall
OBJS = main.o memo.o calendar.o
TARGET = diary

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o $(TARGET)