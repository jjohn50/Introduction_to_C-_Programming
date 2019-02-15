// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std; 
int main()
{
	int input;
	int factorial = 1; 
	cout << "Enter a number: " << endl; 
	cin >> input; 
	if (input > 0)
	{
		for (int t = input; t >= 1; t--)
		{
			factorial = factorial*t; 
		}
	}
	else
	{
		cout << "Nothing will happen" << endl; 
	}
	cout << factorial; 
	system("pasue"); 
}

