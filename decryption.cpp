#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
char* decrypt(char* text, int shift)
{
	const int size = 1000;
	char* chipher_text = new char[size];
	memset(chipher_text, 0, size);
	char alpha;
	for (int i = 0; (i <text[size]!= '\0');i++)
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
	
			
		chipher_char = (chipher_char-shift) % 26;
			if (chipher_char < 0)
			{
				chipher_char += 26;
			}
		chipher_text[i] = chipher_char + alpha;

	}
	for (int i = 0;i < text[size];i++)
	{
		cout << "the encrypted file is:  " << chipher_text[i];
	}

	return chipher_text;
}