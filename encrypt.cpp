#include <stdio.h>
#include <string.h>
#include <iostream>

char* encrypt(char* text, int shift)
{
	size_t size = 127;
	char* chipher_text = new char[size];
	 memset(chipher_text,0x20, size);
	 char alpha;
	for (int i = 0; i<size;i++)
	{
		if (text[i] >= 'a' && text[i] <= 'z')
		{
			alpha = 'a';
			
		}
		else if (text[i] >= 'A' && text[i] <= 'Z')
		{
			alpha = 'A';
		}
		else 
		{
			chipher_text[i] = text[i];
			continue;
		}
		char chipher_char = (text[i] - alpha);
		chipher_char = (chipher_char + shift) % 26;
		chipher_text[i] = chipher_char + alpha;
    

	}
	chipher_text[126] = '\0';
	
	return chipher_text;
}