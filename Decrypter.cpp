// Encrypter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string words = "helloworld";
	int lenWords = words.length();
	string alphabet = "abcdefghijklmnopqrstuvwxyz ";
	int lenAlphabet = alphabet.length();
	string newWord;

	for (int x = 0; x < lenWords; x++)
	{
		for (int y = 0; y < lenAlphabet; y++)
		{
			if (words[x] == alphabet[y])
			{
				int offset = y - 3;
				if (offset < 0)
				{
					offset += (lenAlphabet);
				}



				newWord += alphabet[offset];
				break;

			}
		}
	}
	cout << newWord;


}
