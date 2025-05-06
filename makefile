CC = gcc

.PHONY: all clean

SRC = ./source/
OUT =  ./bin
Src_Files = source/main.c
CFLAGS = -Wall

NAME = app
FINAL_OUT = $(OUT)/$(NAME) #Exe name, the flag for compiling, and the location to output to

all:  clean build


build:$(Src_Files)
	$(CC) $(CFLAGS) $< -o $(FINAL_OUT)


%.o: %.c
	$(CC) -c $(CFLAGS)  $^ -o $(OUT)/$@

$(OBJS): %.o: %.c


clean:
	rm -f $(FINAL_OUT)