// string-reverse-vowels.cpp : Defines the entry point for the console application.
//

/*
1) Reverse vowels in the string

Input - interview, Output - entirveiw

*/

// NOTE: 
/*String literals are stored in read only section of memory.Any attempt to modify the contents of a string literal invokes Undefined Behaviour(segmentation fault on most implementations).

Use an array of characters rather

char str[] = "HelloGuys";*/

#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;

bool isVowel(char v)
{
	if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
		return true;
	return false;
}

void swap(char* str, int u, int v)
{
	char temp = str[u];
	str[u] = str[v];
	str[v] = temp;
}

void reverseVowels(char* str)
{
	unsigned u = 0, v = strlen(str)-1;
	while (1)
	{
		while ((u != v) && !isVowel(tolower(str[u])))
		{
			u++;
		}
		while ((v>=0) && !isVowel(tolower(str[v])))
		{
			v--;
		}
		if (u > v) return;
		swap(str, u, v);
		u++, v--;
	}
}


int main()
{
	char str[] = "Interview";
	reverseVowels(str);
	cout << "str is " << str;
    return 0;
}

