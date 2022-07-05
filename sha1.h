#pragma once

#include <stdint.h>

typedef struct _Sha1Digest {
    uint32_t digest[5];
} Sha1Digest;
Sha1Digest Sha1Digest_fromStr (const char* src);
void       Sha1Digest_toStr   (const Sha1Digest* digest, char* dst);

typedef struct _Sha1Ctx Sha1Ctx;
Sha1Ctx*   Sha1Ctx_create    (void);
void       Sha1Ctx_reset     (Sha1Ctx*);
void       Sha1Ctx_write     (Sha1Ctx*, const void* msg, uint64_t bytes);
Sha1Digest Sha1Ctx_getDigest (Sha1Ctx*);
void       Sha1Ctx_release   (Sha1Ctx*);
uint64_t   gather_message    (int count, char** argv, char** message);

Sha1Digest Sha1_get (const void* msg, uint64_t bytes);
