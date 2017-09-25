// string-remove-consecutive-chars.cpp : Defines the entry point for the console application.
//

/*
Remove consecutive duplicate characters in a string

Input - "aaaabbbccded" Output - "abcded"
*/

#include "stdafx.h"
#include "string"
#include "iostream"
using namespace std;


char* removeConsecutiveDuplicates(string& str)
{
	char* strDupRemoved = new char[str.size()];
	strDupRemoved[0] = str[0];
	int j = 1;
	for(int i=1; i<str.size(); i++)
	{
		while (str[i-1] == str[i])
		{
			i++;
		}
		// Found a unique char
		strDupRemoved[j++] = str[i];
	}

	strDupRemoved[j] = '\0';
	return strDupRemoved;
}

int main()
{
	string str = "aaaabbbccded";
	char* strWithDupRemoved = removeConsecutiveDuplicates(str);

	cout << "String with dup removed = " << strWithDupRemoved;
    return 0;
}

