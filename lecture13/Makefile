CC=       	gcc
CFLAGS= 	-g -gdwarf-2 -std=gnu99 -Wall
LDFLAGS=	-pthread
C_SOURCE=       $(wildcard *.c)
PROGRAMS=       $(C_SOURCE:.c=)

all:    $(PROGRAMS)

%:      %.cpp queue.h thread.h
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(PROGRAMS)

.PHONY: all clean
