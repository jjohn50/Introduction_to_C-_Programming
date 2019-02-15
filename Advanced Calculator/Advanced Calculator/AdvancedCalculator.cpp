// AdvancedCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
	int num1, num2, operation; 
	float num3, num4; 
	cout << "Hello, Welcome to Advanced Calculator 2.0, there have been a few upgrades since the last time you were here" << endl; 
	cout << "Enter two integer" << endl; 
	cin >> num1; 
	cin >> num2; 
	cout << "Enter two float values" << endl; 
	cin >> num3; 
	cin >> num4; 
	cout << "Enter the operation that your want to do: 1: Addition, 2: Subtraction, 3: Mutiplication" << 
		"4: Division, 5: Logs, 6: Exponents, 7: Sqaure root, 8: All basis math operations" << endl; 
	cin >> operation; 
	switch (operation)
	{
	case 1:
		cout << "Addition for integers: " << num1 + num2 << endl; ;
		cout << "Addition for floats " << num3 + num4 << endl; 
		break; 
	case 2:
		cout << "Subtraction for integers: " << num1 - num2 << endl; 
		cout << "Subtraction for floats: " << num3 - num4 << endl; 
		break; 
	case 3:
		cout << "Mutiplication for integers: " << num1*num2 << endl; 
		cout << "Mutiplication for floats: " << num3*num4 << endl; 
		break; 
	case 4:	//fix 
			cout << "Division for integers: " << (float)num1 / num2 << endl;
			cout << "Divison for floats: " << (float)num3 / num4 << endl;
		break; 
	case 5: 
		cout << "First number: " << log(num1) << endl;
			cout << "Second number: " << log(num2) << endl;
			cout << "Thrid number: " << log(num3) << endl;
			cout << "Fourth number: " << log(num4) << endl;
		break; 
	case 6:
		int pow1, pow2; 
		float pow3, pow4; 
		cout << "What do you want your integer power to be? " << endl;
		cin >> pow1 >> pow2; 
		cout << "What do ou want your float power to be?" << endl; 
		cin >> pow3 >> pow4; 
		cout << "First number: " << pow(num1, pow1) << endl; 

		cout << "Second number: " << pow(num2, pow2) << endl; 

		cout << "Third number: " << pow(num3, pow3) << endl; 

		cout << "Fourth number: " << pow(num4, pow4) << endl; 
		break; 
	case 7: 
			cout << "Square root of first number: " << sqrt(num1) << endl;
			cout << "Square root of second number: " << sqrt(num2) << endl;
			cout << "Square root of thrid number: " << sqrt(num3) << endl;
			cout << "Sqaure root of fourth number: " << sqrt(num4) << endl;
		break; 
	case 8:  
		cout << "Addition: " << endl; 
		cout << "Addition for integers: " << num1 + num2 << endl; ;
		cout << "Addition for floats " << num3 + num4 << endl;
		cout << endl; 

		cout << "Subtraction: " << endl; 
		cout << "Subtraction for integers: " << num1 - num2 << endl;
		cout << "Subtraction for floats: " << num3 - num4 << endl;
		cout << endl;


		cout << "Mutiplication: " << endl; 
		cout << "Mutiplication for integers: " << num1*num2 << endl;
		cout << "Mutiplication for floats: " << num3*num4 << endl;
		cout << endl;

	
		cout << "Division: " << endl; 
		cout << "Division for integers: " << (float)num1 / num2 << endl;
		cout << "Divison for floats: " << num3 / num4 << endl;
		cout << endl;
		break; 
	}
	system("pause"); 
    return 0;
}

