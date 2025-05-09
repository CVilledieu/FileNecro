CC = gcc

.PHONY: all clean

SRC = ./source/

Src_Files = source/main.c
CFLAGS = -Wall

OUT =  ./bin

NAME = app
FINAL_OUT = $(OUT)/$(NAME) #Exe name, the flag for compiling, and the location to output to

all:  clean build


build:$(Src_Files)
	$(CC) $(CFLAGS) $< -o $(FINAL_OUT)


%.o: %.c
	$(CC) -c $(CFLAGS)  $^ -o $(OUT)/$@


clean:
	rm -f $(FINAL_OUT)