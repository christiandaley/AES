//AES_UTIL.c

#include <assert.h>
#include <string.h>
#include "AES_UTIL.h"

static uint8_t char_value(const char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    else if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    else if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    
    return 255;
}

void aes128_string_parse(const char *string, uint8_t *data) {
    assert(strlen(string) == 32);
    
    int i;
    for (i = 0; i < 16; i++)
        data[i] = char_value(string[i * 2]) * 16 + char_value(string[i * 2 + 1]);
    
}