// ManyVoidMethods.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// Assignement6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <cmath>
using namespace std;

void printgreeting()
{
	cout << "Hope you're having a good day" << endl;
}
void divideNumbers(float x, float y)
{
	if (y == 0) {
		cout << "Cannot perform division" << endl;
	}
	else
	{
		cout << x / y << endl;
	}
}
int factorial(int num)
{
	if (num > 0)
	{
		if (num == 1 || num == 0)

		{
			return 1;
		}
		else
		{
			return (num*factorial(num - 1));
		}
	}
	else
	{
		return 0;
	}
}
void fibo(int N)
{
	unsigned int a = 0, b = 1;
	cout << a << " " << b;
	unsigned c;
	for (int rt = 1; rt<N - 1; rt++)
	{
		c = a + b;
		cout << " " << c;
		a = b;
		b = c;
	}
}
int moves(int z)
{
	int total = 0;
	total = pow(2, z) - 1;
	return total;
}

int main()
{
	float a, b;
	int fact, pos, circles;
	string t = "hello";
	cout << "Enter two float values, two non-negative numbers, and amount of circles present for Tower of Hanoi" << endl;
	cin >> a >> b >> fact >> pos >> circles;
	printgreeting();
	divideNumbers(a, b);
	cout << "Factorial of " << fact << " is " << factorial(fact) << endl;
	fibo(pos);
	cout << endl;
	cout << "Number of total moves are " << moves(circles) << endl;
	system("pause");
	return 0;
}


