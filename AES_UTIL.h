//AES_UTIL.h

#ifndef __AES__AES_UTIL__
#define __AES__AES_UTIL__

#include <stdint.h>

/* Simple utility method. Parses a string of hexadecimal characters into an array of bytes.
 The string must be exactly 32 hexadecimal characters (16 bytes). */

void aes128_string_parse(const char *string, uint8_t *data);

#endif /* defined(__AES__AES_UTIL__) */
