/*
 * cipher_lookup_table.c
 *
 *  Created on: Feb 7, 2023
 *      Author: Shyama Gandhi
 */

/*
 * init_cipher_lookup_table() initializes the "cipher_lookup_table" array with the shifted characters for a given shift value.
 * init_decipher_lookup_table() initializes the "decipher_lookup_table" array with the reverse of the shifted characters for a given shift value.
 * cipher_char() takes a single character and a shift value and returns the cipher character.
 * decipher_char() takes a single cipher character and shift value, return the original character.
 */

#include <stdio.h>
#include <string.h>
#include "cipher_lookup_table.h"

void init_cipher_lookup_table(int shift) {
  for (int i = 0; i < ALPHABET_SIZE; i++) {
    cipher_lookup_table[i] = (i + shift) % ALPHABET_SIZE + 'a';
  }
}

void init_decipher_lookup_table(int shift) {
  for (int i = 0; i < ALPHABET_SIZE; i++) {
    decipher_lookup_table[i] = (i - shift + ALPHABET_SIZE) % ALPHABET_SIZE + 'a';
  }
}

char cipher_char(char c, int shift) {
  if (c >= 'a' && c <= 'z') {
    return cipher_lookup_table[c - 'a'];
  }
  else if (c >= 'A' && c <= 'Z') {
    return cipher_lookup_table[c - 'A'] - ('a' - 'A');
  }
  else {
    return c;
  }
}

char decipher_char(char c, int shift) {
  if (c >= 'a' && c <= 'z') {
    return decipher_lookup_table[c - 'a'];
  }
  else if (c >= 'A' && c <= 'Z') {
    return decipher_lookup_table[c - 'A'] - ('a' - 'A');
  }
  else {
    return c;
  }
}

