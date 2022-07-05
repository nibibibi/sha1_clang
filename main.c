//main.c
#include "sha1.h"
#include <stdio.h>
#include <string.h>
int main (int argc, char* argv[]) {
    if (argc < 2) {
        printf("\nNo message provided.\n");
        return -1;
    }
    char* message;
    uint64_t bytes = 0;
    bytes = gather_message(argc, argv, &message);
    Sha1Digest digest = Sha1_get(message, bytes - 1);
    char cStr[41];
    Sha1Digest_toStr(&digest, cStr);
    printf("\nSHA-1 digest for \"%s\" is: %s\n", argv[1], cStr);
    return 0;
}