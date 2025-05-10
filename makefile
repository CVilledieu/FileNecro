CC = gcc

CFLAGS = -Wall


SRCd = ./src
DEPd = $(SRCd)/depend


SRCo = $(patsubst %.c, %.o, $(wildcard $(SRCd)/*.c))
DEPo = $(patsubst %.c, %.o, $(wildcard $(DEPd)/*.c))
ALLo = $(SRCo) $(DEPo)

NAME_OUTPUT = -o bin/pCreate


all: build clean

%.o: %.c 
	$(CC) -c $(CFLAGS) $^ -o $@

build: $(ALLo)
	$(CC)  $^ $(CFLAGS) $(LIBS)  $(NAME_OUTPUT) 

clean: 
	rm -rf $(SRCd)/*.o