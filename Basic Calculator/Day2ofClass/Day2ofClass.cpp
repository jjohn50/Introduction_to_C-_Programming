// Day2ofClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int add(int s, int t)
{
	return s + t; 
}
int subtract(int r, int s)
{
	return r - s; 
}
int product(int q, int e)
{
	return q*e; 
}
double division(double q, double v)
{
	return q / v; 
}


int main()
{
	int num1, num2; //Naming variable in way that reflects its purpose
	double thing; //Can hold much more than float 
	float tg; //Holds less digits than a functions
	int a[] = { 1,2,3,4,5 };
	cout << "Enter two integer values " << endl;
	cin >> num1;
	//White spaces do not matter, unless it for 
	cin >> num2;
	cout << "Sum: " << add(num1, num2) << endl;
	cout << "Subtraction: " << subtract(num1, num2) << endl;
	cout << "Mutiple: " << product(num1, num2) << endl;
	cout << "Division: " << division(num1, num2) << endl;
	for (int t = 0; t < 4; t++)
	{
		cout << a[t]; 
	}
	cout << endl; 
				system("pause");
				return 1;
	}

