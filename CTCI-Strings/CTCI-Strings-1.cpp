// CTCI-Strings.cpp : Defines the entry point for the console application.
//
/*
// Implement an algorithm to determine if a string has all unique characters.
// What if you can not use additional data structures?
*/

// pseudocode
/*

bool isUniqueCharacters(string str)
{
	int hash_map = 0;
	for (int i =0; i < strlen(str.c_str()); i++)
	{
		int bitToSet = str[i].toLowerCase().toInt() - 96
		if (!(hash_map & (1<<bitToSet)))
		{
			// first encounter of the character, set the character
			hash_map = hash_map | (1 << bitToSet);
			continue;
		}

		return false;
	}

}
*/
#include<stdio.h>
#include<string>  // needed or string class
#include<iostream> // neeeded for std::cout
#include<algorithm> //need for std::transform
using namespace std;

// additional data structure used in this case
bool isUniqueCharacters(string str)
{
	unsigned int hash_map = 0;
	
	for (int i =0; i < strlen(str.c_str()); i++)
	{
		// using unsigned int trying to avoid tolower(char)
		// if unsigned int is not used we have ot write int bitToSet = tolower(str[i]) - 96;
		unsigned int bitToSet = (str[i]) - 'a';
		if (!(hash_map & (1 << bitToSet)))
		{
			hash_map = hash_map | (1 << bitToSet);
			continue;
		}
		return false;
	}

	return true;
}

int main1()
{
	string str = "aAbBcCdD";

	// following method transforms string starting from begin to the end and stores result in dest
	/*std::transform(str.begin(),
		str.end(),
		str.begin(),
		::tolower);*/

	bool isStringUniqueChars = isUniqueCharacters(str);
	if (isStringUniqueChars)
	{
		cout << " String has unique characters" << endl;
	}
	else
	{
		cout << "String does not have unique characters" << endl;
	}
	return 0;
}

