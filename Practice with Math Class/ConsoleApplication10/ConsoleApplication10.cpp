// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <cmath> 
using namespace std; 

const double PI = 3.141592653589793; 
double twice(double ds)
{
	return ds * 2; 
}
double squareroot(double thing)
{
	if (thing < 0)
	{
		return 0.0; 
	}
	else
	{
		cout << sqrt(thing);
	}
}
//void: does not have to return anything. Uses the cout statement // 
double power(double rin) 
{
	return pow(rin, 2); 
}
string logs(int l)
{
	if (l < 0)
	{
		return "Operation cannot be performed"; 
	}
	else
	{
		cout << log(l); 
	}
}
int sins(int s)
{
	return sin(s); 
}
int coss(int s)
{
	return cos(s); 
}
double inverse(double y)
{
	return (1 / y); 
}

/*Perform extensive math operations on those numbers and print back those values as well. 
Examples include, but are not limited to, operations such as: square-root, logarithm, sine, 
cosine, exponents, inverse, etc. 
It should also be smart enough to indicate when an operation cannot be performed,
such as square-root of negative numbers or 1/x where x = 0. ​*/ 
int main()
{
	int userinput; 
	float input;
		cout << "Enter a integer " << endl;
		cin >> userinput;
		cin >> input; 
		cout << "Double your number would be: " << twice(userinput) << " " << twice(input) << endl;
		cout << "Square root is: " << squareroot(userinput) << " " << squareroot(input) << endl; //Make this a log// 
		cout << "Your number rasied to squared would be: " << power(userinput) << " " << power(input) << endl;
		cout << "Natural log your answer would be: " << logs(userinput) << " " << logs(input) << endl; 
		cout << "Sin of your answer is: " << sins((userinput*PI)/180) << " " << sins(input) << endl;
		cout << "Cos of your answer is: " << coss(userinput) << " " << coss(input) << endl;
		cout << "Inverse of your function " << inverse(userinput) << " " << inverse(input) << endl;
		// sine, cosine, tangent, exponents, inverse, and etc. Also, indciate if it not possible to uses those #s// 
	system("pause");
    return 0;
}

