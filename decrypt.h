
#ifndef _DECRYPT_H
#define _DECRYPT_H

/* Decrypt libraries */
#include <stdio.h>
#include <string.h>

/*
 * decrypt
 *
 * obtains a text file from the user and decrypt it
 * takes two parameters: a char * containing text to decrypt, and an integer for the shift value
 * Returns the array
 *
 */
char* decrypt(char* text, int shift);

#endif
