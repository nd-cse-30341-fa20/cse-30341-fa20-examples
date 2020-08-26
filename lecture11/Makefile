TARGET=		pc slackline slackline_semaphore
CFLAGS=		-g -Wall -std=gnu99 -pthread 

all:		$(TARGET)

pc:		queue.c pc.c
	$(CC) $(CFLAGS) -o $@ $^

slackline:	slackline.c
	$(CC) $(CFLAGS) -o $@ $^

slackline_semaphore:	slackline_semaphore.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
