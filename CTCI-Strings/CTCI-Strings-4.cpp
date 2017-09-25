// CTCI-Strings.cpp : Defines the entry point for the console application.
//
/*
15)	Write a method to decide if two strings are anagrams or not.
Ex: “cinema” “iceman”
*/

// pseudocode
/*
count characters 
bool isAnagram(char* str1, char* str2)
{
boolean charArray = new Boolean[256];

if(length(str1) != lenght(str2))
{
	return false;
}

for(int i=0; i<length(charArray); i++)
{
	charArray[i] = 0;
}

for(int i=0; i<length(str1);i++)
{
	charArray[str1[i]]++;
	charArray[str2[i]]--;
}

for(int i=0;i < length(charArray); i++)
{
	if(charArray[i]!=0)
		return false;
}

return true;
}
*/
#include<stdio.h>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

bool isAnagram(char* str1, char* str2)
{
	int charArray[256] = { 0 };

	if (strlen(str1) != strlen(str2))
	{
		return false;
	}
	
	for (int i = 0; i< strlen(str1); i++)
	{
		charArray[str1[i]]++;
		charArray[str2[i]]--;
	}

	for (int i = 0; i < 256; i++)
	{
		if (charArray[i] != 0)
			return false;
	}

	return true;
}
int main4()
{
	// cannot use char* str here because that would be a string literal which is read only
	char str1[] = "iceman";
	char str2[] = "cinmma";

	// following method transforms string starting from begin to the end and stores result in dest
	/*std::transform(str.begin(),
	str.end(),
	str.begin(),
	::tolower);*/

	bool val = isAnagram(str1, str2);
	cout << " String " << str1 << " and : " << str2;
	if (val)
	{
		cout << " are anagrams \n";
	}
	else
	{
		cout << " are not anagrams \n";
	}
	return 0;
}

