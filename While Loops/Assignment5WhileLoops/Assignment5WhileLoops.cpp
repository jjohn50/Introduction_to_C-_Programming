// Assignment5WhileLoops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std; 

/*Write a program that accepts an indefinite set of numbers
until the user enters “-1”. In other words, the program keeps accepting new values until the user provides a “-1” 
(your program accepts all values, and
discards
the “-1”). When done, the program prints back to the user: 
(i) the sum of all numbers entered (except -1), 
(ii) the minimum value seen across all numbers(except -1), 
(iii) the maximum value across all numbers (except -1).*/
int main()
{
	int array[10000];
	cout << "Enter as many numbers that you want and once your done enter -1" << endl; 
	int t = 0;
	int sum = 0; 
	int max = -200000000; 
	int min = 200000000;
	while (t <10000)
	{
		int x; 
		cin >> x; 
		if (x == -1)
		{
			break; 
		}
		else
		{
			array[t] = x;
			sum += x; 
		}	
		if (array[t] > max)
		{
			max = array[t];
		}
		if (array[t] < min)
		{
			min = array[t];
		}
		t++; 
	}
	cout << "Your total is " << sum << endl; 
	cout << "Your min is " << min << endl; 
	cout << "Your max is " << max << endl; 
	system("pause");
    return 0;
}

