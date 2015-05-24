#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#define BUFSIZE 4096

#define USAGE                                           \
  "usage:\n"                                            \
  "  echoserver [options]\n"                            \
  "options:\n"                                          \
  "  -p                  Port (Default: 8888)\n"        \
  "  -n                  Maximum pending connections\n" \
  "  -h                  Show this help message\n"


int main(int argc, char **argv) {
  int option_char;
  int portno = 8888; /* port to listen on */
  int maxnpending = 5;

  // Parse and set command line arguments
  while ((option_char = getopt(argc, argv, "p:n:h")) != -1) {
    switch (option_char) {
      case 'p':  // listen-port
        portno = atoi(optarg);
        break;
      case 'n':  // server
        maxnpending = atoi(optarg);
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
