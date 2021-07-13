
#ifndef _ENCRYPT_H
#define _ENCRYPT_H

/* ENCRYPT libraries */
#include <stdio.h>
#include <string.h>

/*
 * encrypt
 *
 * obtains a text file from the user and encrypts it
 * takes two parameters: a char * containing text to encrypt, and an integer for the shift value
 * Returns the array
 *
 */
char* encrypt(char* text, int shift);
#endif
