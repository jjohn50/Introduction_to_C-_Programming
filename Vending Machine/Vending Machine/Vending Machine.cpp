// Vending Machine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
using  namespace std;

class vend{

public:
	void dispensePepsi() {
		cout << "Here is your Pepsi" << endl; 
	}

	void dispenseCoke() {
		cout << "Here is your Coke" << endl;
	}
	void dispenseMountainDew() {
		cout << "Here is your Mountain Dew" << endl;
	}
	void dispenseRootBeer() {
		cout << "Here is your Root Beer" << endl;
	}
};


int main()

{
	vend SODA;
	int choice;

	while (1)
	{
		cout << "Press 1 for Pepsi" << endl;
		cout << "Press 2 to Coke" << endl;
		cout << "Press 3 for Mountain Dew " << endl;
		cout << "Press 4 for Root Beer " << endl; 
		cout << "Press anything else to exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: SODA.dispensePepsi();
			break;
		case 2: SODA.dispenseCoke();
			break;
		case 3: SODA.dispenseMountainDew();
			break;
		case 4: SODA.dispenseRootBeer();
			break; 
		default:
			break; 
		}
	}
	system("pause"); 
	return 0;
}