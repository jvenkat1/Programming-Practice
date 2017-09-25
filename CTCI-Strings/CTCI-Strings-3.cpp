// CTCI-Strings.cpp : Defines the entry point for the console application.
//
/*
Design an algorithm and write code to remove the duplicate characters in a string
without using any additional buffer. NOTE: One or two additional variables are fine.
An extra copy of the array is not. FOLLOW UP Write the test cases for this method
*/

// pseudocode
/*

*/
#include<stdio.h>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

void removeDupChars(char* str)
{
	// if string were a string u can convert it to char array using 
	// char* stringToCharArr = &str[0];

	unsigned int hash_map = 0;
	int ip = 0, jip=0;
	while(*(str+ip))
	{
		unsigned int bitToSet = tolower(*(str + ip)) - 'a';
		if (!(hash_map & (1 << bitToSet)))
		{
			hash_map = hash_map | (1 << bitToSet);
			*(str + jip) = *(str + ip);
			jip++;
			continue;
		}
		ip++;
	}
	*(str + jip) = '\0';
}

int main3()
{
	// cannot use char* str here because that would be a string literal which is read only
	char str[] = "aaAbbAdDccAaaBb";

	// following method transforms string starting from begin to the end and stores result in dest
	/*std::transform(str.begin(),
	str.end(),
	str.begin(),
	::tolower);*/

	removeDupChars(str);
	cout << " String without duplicate characters is : " << str << endl;
	return 0;
}

