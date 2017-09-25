// string-code-permutation.cpp : Defines the entry point for the console application.
//

// Check if one string is a permutation of another
// s1 = test , s2 = estt Output true
#include "stdafx.h"
#include<string>

using namespace std;

bool checkPermutation(string& s1, string& s2)
{
	if (s1.size() != s2.size())
		return false;

	char* asc = new char[128];

	for (int i=0; i <128; i++)
	{
		asc[i] = 0;
	}
	int u = s1.size()-1, v = s2.size()-1;
	while (u>=0)
	{
		asc[s1[u--]]++;
		asc[s2[v--]]--;
	}

	for (int i = 0; i <128; i++)
	{
		if (asc[i] != 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string s1 = "test";
	string s2 = "eatt";
	bool res = checkPermutation(s1, s2);
    return 0;
}

