// main.c

#include <stdio.h>
#include <stdlib.h>
#include "AES.h"
#include "AES_UTIL.h"

static const char *key_string = "2b7e151628aed2a6abf7158809cf4f3c";
static const char *plaintext_string = "6bc1bee22e409f96e93d7e117393172a";

int main(int argc, const char * argv[]) {
    uint8_t key[16];
    uint8_t plaintext[16];
    uint8_t ciphertext[16];
  
    // example usage
    // first parse the key and plaintext strings into an array of bytes
    aes128_string_parse(key_string, key);
    aes128_string_parse(plaintext_string, plaintext);
    
    // encrypt the plaintext using the key
    aes128_ecb_encrypt(plaintext, key, ciphertext);
    
    
    // print out the corresponding ciphertext
    printf("Plaintext: %s\nKey: %s\nCiphertext: ", plaintext_string, key_string);
    
    
    int i;
    for (i = 0; i < 16; i++)
        printf("%02x", ciphertext[i]);
    
    printf("\n");
    
    return 0;
}