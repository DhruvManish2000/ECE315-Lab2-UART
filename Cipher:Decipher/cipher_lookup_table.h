/*
 * cipher_lookup_table.h
 *
 *  Created on: Feb 7, 2023
 *      Author: Shyama Gandhi
 */

#ifndef CIPHER_LOOKUP_TABLE_H
#define CIPHER_LOOKUP_TABLE_H

#define ALPHABET_SIZE 26

//stores the mapping of ASCII characters to the shifted characters
char cipher_lookup_table[ALPHABET_SIZE];
char decipher_lookup_table[ALPHABET_SIZE];

//initializing the look-up tables
void init_cipher_lookup_table(int shift);
void init_decipher_lookup_table(int shift);

//Applying the cipher/decipher to a single character
char cipher_char(char c, int shift);
char decipher_char(char c, int shift);

#endif // CIPHER_LOOKUP_TABLE_H

