//AES.h

#ifndef AES_AES_h
#define AES_AES_h

#include <stdint.h>

// basic electronic codebook implementation of AES. Not secure on its own.

void aes128_ecb_encrypt(const uint8_t *plaintext, const uint8_t *key, uint8_t *ciphertext);
void aes128_ecb_decrypt(uint8_t *plaintext, const uint8_t *key, const uint8_t *ciphertext);


#endif
