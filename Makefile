CFLAGS := -Wall --std=gnu99 -g

default: echoserver echoclient
webserver: $(LDFLAGS) echoserver.o
webclient: $(LDFLAGS) echoclient.o

.PHONY: clean

clean:
	rm -fr *.o echoserver echoclient
