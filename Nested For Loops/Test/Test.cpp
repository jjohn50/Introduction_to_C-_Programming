// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std; 



int addNumbers(int x, int y) {
	int result =0;
	result = x + y;
	return result;
}
	int main()
	{
		int x = 39;
		int y = 51;
		int number = 0; 
		cout << addNumbers(x, y) << endl; 
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				cout << "Spam" << endl;
				number++; 
			}
		}
		cout << number; 
			

			system("pause");
		return 1; 
	}

