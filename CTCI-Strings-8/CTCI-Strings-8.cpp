// CTCI-Strings-8.cpp : Defines the entry point for the console application.
//
/*
Assume you have a method isSubstring which checks if
one word is a substring of another.
Given two strings, s1 and s2, write code to check 
if s2 is a rotation of s1 using only one call to
isSubstring(i.e., “waterbottle” is a rotation 
of “erbottlewat”)

public static boolean isSubstring(char str1[], char str2[]){
y)			int counter = 0;
z)			for(int i = 0; i < str2.length; i++){
aa)				int start = i;
bb)				while(counter < str2.length && start < str1.length && str1[start++] == str2[counter++]){
cc)				    if(counter == str2.length)return true;
dd)				}
ee)				counter = 0;
ff)			}
gg)			return false;
hh)		}

*/
#include<stdio.h>
#include<cstring>
#include<iostream>
#include<math.h>
#include<string>
using namespace std;

bool isSubString(string str1, string str2)
{
	int counter = 0;
	for (int i = 0; i < strlen(str1.c_str()); i++)
	{
		int start = i;
		while (counter < strlen(str2.c_str()) && start < strlen(str1.c_str()) && str1[start++] == str2[counter++])
		{
			 if (counter == strlen(str2.c_str()))
				 return true;
		}
		counter = 0;
	}
	return false;
}

int main()
{
	string str1 = "waterbottle";
	string str2 = "erbottlewat";

	str1 = str1.append(str1);
	bool isRotation = isSubString(str1, str2);
	if (isRotation)
	{
		cout << "String are a rotation" << endl;
	}
	else
	{
		cout << "Strings are not rotation" << endl;
	}

	return 0;
}

