// String-Problem3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
using namespace std;

// reverse sentences
// Input = "I am taking test", output = "test taking am I"

void reverseString(string& str, int start, int end)
{
	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

void reverseWords(string& str)
{
	// first reverse string
	reverseString(str, 0, str.size()-1);
	
	// now reverse words
	unsigned u = 0, v = str.size() -1, start = 0;
	while( u != v)
	{
		while( (u!=v) && (str[u] != ' '))
		{
			u++;
		}

		reverseString(str, start, u-1);
		u++;

		start = u;
	}
}

int main()
{
	string sentence = "I am taking test\0";
	reverseWords(sentence);
    return 0;
}

