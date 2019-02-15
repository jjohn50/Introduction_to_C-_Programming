// SumMaxandMin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


/*[Program-1]
Write a program that accepts exactly ten (10) integer numbers from the user.
When the user is done inputting these numbers,
the program prints back:
(i) the sum of the 10 numbers,
(ii) the minimum value from the 10 numbers, and
(iii) the maximum value
from the 10 numbers.*/
/*int add(int s, int t)
{
return s + t;
}*/
int main()
{
	int array[10];
	cout << "Enter 10 integer" << endl;
	for (int t = 0; t < 10; t++)
	{
		int s;
		cin >> s;
		array[t] = s;
	}
	int min = 0;
	int max = 0;
	int sum = 0;
	for (int w = 0; w < 10; w++)
	{
		sum += array[w];
		if (array[w] <min)
		{
			min = array[w];
		}
		else
		{
		}
		if (array[w] > max)
		{
			max = array[w];
		}
		else
		{
		}
	}
	cout << "The sum of number is: " << sum << endl;
	cout << "The min number is " << min << endl;
	cout << "The max number is " << max << endl;
	system("pause");
	return 0;
}

