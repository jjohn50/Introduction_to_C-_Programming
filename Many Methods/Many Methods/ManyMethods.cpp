// ManyMethods.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std; 

int main()
{
	float a, b; 
	int v, f, circles; 
	vector <int> fibo; 
	cout << "Enter two numbers " << endl; 
	cin >> a, b; 
	//printGreeting(); 
	//divideNumbers(a, b); 
//	cout << "Enter number" << endl; 
	//cin >> v; 
	//facetorial(v); 
	//cout << "Enter a number for fibonacci sequence" << endl; 
	//	cin >> f; 
	//	fibonacci(f); 
	cout << "Enter the amount of circles present" < , endl; 
	cin >> circles; 
	cout << totalmoves(circles) << endl; 
	system("pause");
    return 0;
}

void printGreeting()
{
	cout << "Hope you're having a good day" << endl; 
}
void divideNumbers(float x, float y)
{
	if (y == 0)
	{
		cout << "You cannot divide by zero" << endl; 
	}
	else
	{
		cout << x / y << endl; 
	}
}
/*int facetorial(int num)
{
	if (num < 0)
	{
		cout << 0 << endl; 
	}
	else
	{
		return num*facetorial(num-1);
	}
} */
/*void fibonacci(int N)
{
	if (N <= 0)
	{
		return;
	}
	vector<int> fibo(N, 1);
	fibo[0] = 0;
	for (int i = 2; i < N; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (int i = 0; i < N; i++)
	{
		cout << fibo[i] << ","; 
	}
}*/
int totalmoves(int s)
{
	int total;
	total = pow(2, s) - 1; 
	return total; 
}
