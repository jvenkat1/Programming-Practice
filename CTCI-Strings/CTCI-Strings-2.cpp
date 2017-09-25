// CTCI-Strings.cpp : Defines the entry point for the console application.
//
/*
//	Write code to reverse a C-Style String. (C-String means that “abcd” is represented as
//  five characters, including the null character.)

*/

// pseudocode
/*

char* str = "abcd\0"
void reverseString(char* str[])
{
	for(i=0; i < strlen(str)-1; i++)
	{
		char temp = str[i];
		str[i] = str[strlen(str)-i-1];
		str[strlen(str)-i-1] = temp;
	}
}

}
*/
#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;

void reverseString(char* str)
{
	char* end = str;
	if (str) // to test for null string
	{
		while (*end)
		{
			++end; // move to the end of the string
		}
	}

	end--; // move to character before \0
	while (str < end)
	{
		char temp = *str;
		*str++ = *end;
		*end-- = temp;
	}

}

int main2()
{
	// cannot use char* str here because that would be a string literal which is read only
	char str[] = "TestString\0";

	// following method transforms string starting from begin to the end and stores result in dest
	/*std::transform(str.begin(),
	str.end(),
	str.begin(),
	::tolower);*/

	reverseString(str);
	cout << " Reversed String is : " << str << endl;
	return 0;
}

