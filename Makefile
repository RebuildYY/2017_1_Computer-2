OBJECTS = main.o output.o count.o
SRCS = main.c output.c count.c

CC = gcc
CFLAGS = -g -c

TARGET = test

$(TARGET) : $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

clean:
	rm -rf $(OBJECTS) $(TARGET)
