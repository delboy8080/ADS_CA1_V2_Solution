#pragma once
#include <string>
using namespace std;

void interleave(int *arr1, int len1, int *arr2, int len2, int *arrOut, int len3)
{
	int arr1Pos = 0; 
	int arr2Pos = 0;
	bool first = true;

	for (int i = 0; i < len3; i++)
	{
		if (first && arr1Pos < len1)
		{
			arrOut[i] = arr1[arr1Pos];
			arr1Pos++;
			if (arr2Pos < len2)
				first = false;
		}
		else if(arr2Pos < len2)
		{
			arrOut[i] = arr2[arr2Pos];
			arr2Pos++;
			first = true;
		}
	}
}

int countGreaterThan(double *arr, int size, int count, double min, int pos = 0)
{
	if (pos == size)
		return count;
	if (arr[pos] >= min)
		count++;
	return countGreaterThan(arr, size, count, min, ++pos);
}