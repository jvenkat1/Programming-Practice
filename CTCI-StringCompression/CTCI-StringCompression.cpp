// CTCI-StringCompression.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"

using namespace std;

string returnCompressedString(string str)
{
	string newstr;
	int count = 1;
	char seed = str[0];
	int index = 0;
	while ( index <  str.size())
	{
		if (seed == str[index+1])
		{
			count++;
		}
		else
		{
			newstr += seed;
			newstr += to_string(count);
			count = 1;
			seed = str[index + 1];
		}
		index++;
	}

	return newstr.size() < str.size() ? newstr : str;
}

int main()
{
	string compressedStr = returnCompressedString("aaAAbbccdddAAAA");
	cout << compressedStr << "\n";
    return 0;
}

