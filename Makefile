CFLAGS := -Wall --std=gnu99 -g

default: echoserver echoclient
echoserver: $(LDFLAGS) echoserver.o
echoclient: $(LDFLAGS) echoclient.o

.PHONY: clean

clean:
	rm -fr *.o echoserver echoclient
