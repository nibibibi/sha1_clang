#include "sha1.h"
#include <stdio.h>
#include <string.h>
int main (int argc, char* argv[]) {
    Sha1Digest digest = Sha1_get(argv[1], strlen(argv[1]));
    char cStr[41];
    Sha1Digest_toStr(&digest, cStr);
    printf("\nSHA-1 digest for \"%s\" is: %s\n", argv[1], cStr);
    return 0;
}
