#include <iostream>
#include "Functions.h"

int main()
{
	//you can add temporary code to check your work here but make sure you add the tests required for Q2 and Q4 in the unit tests project
	double arr[4] = { 1.2,5.6,8.5,9.8 };
	int count = 0;
	count = countGreaterThan(arr, 4, 0, 5.0);
	cout << "Count greater than 5: " << count << endl;
}