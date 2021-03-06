#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <getopt.h>

/* Be prepared accept a response of this length */
#define BUFSIZE 4096

#define USAGE                                                           \
  "usage:\n"                                                            \
  "  echoclient [options]\n"                                            \
  "options:\n"                                                          \
  "  -s         Server (Default: localhost)\n"                          \
  "  -p         Port (Default: 8888)\n"                                 \
  "  -m         Message to send to server (Default: \"Hello World!\"\n" \
  "  -h         Show this help message\n"

/* Main ========================================================= */
int main(int argc, char **argv) {
  int option_char = 0;
  char *hostname = "localhost";
  unsigned int16 portno = 8888;
  char *message = "Hello World!";

  // Parse and set command line arguments
  while ((option_char = getopt(argc, argv, "s:p:m:h")) != -1) {
    switch (option_char) {
      case 's':  // server
        hostname = optarg;
        break;
      case 'p':  // listen-port
        portno = atoi(optarg);
        break;
      case 'm':  // server
        message = optarg;
        break;
      case 'h':  // help
        fprintf(stdout, "%s", USAGE);
        exit(0);
        break;
      default:
        fprintf(stderr, "%s", USAGE);
        exit(1);
    }
  }

  /* Socket Code Here */
  
}
