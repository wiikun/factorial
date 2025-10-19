CC = gcc
SRC = factorial.c
OBJ = libfact.o
TARGET = libfact.a
HEADER = libfact.h
PREFIX=/usr/local


all:$(SRC)
	$(CC) $(SRC) -c -o $(OBJ)
	ar rcs $(TARGET) $(OBJ)
	cp -f $(TARGET) bin
	cp -f $(HEADER) bin

clean:
	rm -f $(OBJ)
	rm -f $(TARGET)

install: all
	mkdir -p $(PREFIX)/lib
	mkdir -p $(PREFIX)/include
	cp -f $(TARGET) $(PREFIX)/lib
	cp -f $(HEADER) $(PREFIX)/include
	ldconfig