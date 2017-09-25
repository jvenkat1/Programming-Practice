// CTCI-Strings.cpp : Defines the entry point for the console application.
//
/*
•	Write a method to replace all spaces in a string with ‘%20’.
*/

// pseudocode
/*
count characters
char* insertSpacesInString(char* str1)
{
	int noOfSpaceChars = 0;
	for(i=0; i< strlen(str1); i++)
	{
		// identify how many space characters are there
		if(str1[i] == " ")
		{
			noOfSpaceChars++;
		}
	}

	char* newStr1 = new Char[strlen(str1) + 2 * noOfSpaceChars];
	int j=0;
	for(i=0; i< strlen(str1); i++)
	{
		if(str1[i] == " ")
		{	
			newStr1[j] = "%";
			newStr1[j+1] = "2";
			newStr1[j+2] = "0";
		}
		else
		{
			newStr1[j] = str1[i];
		}
	}

	return newStr1;
}
*/
#include<stdio.h>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

void insertSpacesInString(char* str1, char** str2)
{
	int noOfSpaceChars = 0;
	for (unsigned int i = 0; i< strlen(str1); i++)
	{
		// identify how many space characters are there
		if (str1[i] == ' ')
		{
			noOfSpaceChars++;
		}
	}

	int newStringLength = strlen(str1) + 2 * noOfSpaceChars;
	int j = 0;
    *str2 = new char(newStringLength);
	for (unsigned int i = 0; i< strlen(str1); i++)
	{
		if (str1[i] == ' ')
		{
			*(*str2+j) = '%';
			*(*str2+j+1) = '2';
			*(*str2+j+2) = '0';
			j += 3;
		}
		else
		{
			*(*str2+j) = str1[i];
			j++;
		}
	}

	*(*str2+j) = '\0';
}

int main5()
{
	// cannot use char* str here because that would be a string literal which is read only
	char str1[] = "this is a string with spaces";

	// following method transforms string starting from begin to the end and stores result in dest
	/*std::transform(str.begin(),
	str.end(),
	str.begin(),
	::tolower);*/
	char* str2 = '\0';
	insertSpacesInString(str1, &str2);
	cout << " String " << str2 << endl;
	return 0;
}