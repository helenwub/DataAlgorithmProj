#include <iostream>
#include <fstream>
#include "encrypt.h"
#include "decrypt.h"
using namespace std;

int main()
{
	char letter;
	const int size = 126;
	char  FilePath[size];
	int shift;
	char text[size];
	char* pEncrypt;
	memset(text,0x20, size);
	ifstream inFile;
	cout << "Would you like to (e)ncrypt or (d)ecrypt a file?";
	cin >> letter;
	cout << "Enter the shift value: ";
	cin >> shift;
	cout << "Enter the path to the file: ";
	cin >> FilePath;
	inFile.open(FilePath);
	if (!inFile)
	{
		return 1;
	}
	inFile.read(text, size);
	inFile.close();
	if (letter = 'e') {
		pEncrypt = encrypt(text, shift);
		for (int i = 0;i < size;i++) {

			cout << pEncrypt[i];
		}
	}
	else if (letter = 'd') {
		cout << "The decrypted text is: " << decrypt(text, shift) << endl;
	}
	else
	{
		return 0;
	}

	
		return 0;
}


