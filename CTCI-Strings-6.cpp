// CTCI-Strings.cpp : Defines the entry point for the console application.
//
/*
• Given an image represented by an NxN matrix, where each
pixel in the image is 4 bytes, write a method to rotate
the image by 90 degrees. Can you do this in place?
*/

// pseudocode
/*
public void rotate(int[][] matrix) {
int n = matrix.length;
for (int i = 0; i < n / 2; i++) {
for (int j = 0; j < Math.ceil(((double) n) / 2.); j++) {
int temp = matrix[i][j];
matrix[i][j] = matrix[n-1-j][i];
matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
matrix[j][n-1-i] = temp;
}
}
}

*/
#include<stdio.h>
#include<cstring>
#include<iostream>
#include<math.h>
using namespace std;

void rotate(int* matrix, int dimension) {
	int n = dimension;
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < ceil(((double)n) / 2.0); j++) {
			int temp = matrix[i][j];
matrix[i][j] = matrix[n-1-j][i];
matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
matrix[j][n-1-i] = temp;
		}
	}
}

int main5()
{
	int dimension = 4;
	/*cout << "Enter matrix dimension: " << endl;
	cin >> dimension;

	cout << "Enter matrix elements" << endl;
	for (int i = 0; i < dimension; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			cin >> *(matrix + i + j);
		}
	}*/

	int* matrix = new int(dimension*dimension);
	for (int i = 0; i < dimension; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			*(matrix + i + j) = i*4 + j;
		}
	}
	rotate(&matrix, dimension);

	cout << "Rotated elements are \n";
	for (int i = 0; i < dimension; i++)
	{
		for (int j = 0; j < dimension; j++)
		{
			cout << *(matrix + i + j) << "\t";
		}
	}
	return 0;
}