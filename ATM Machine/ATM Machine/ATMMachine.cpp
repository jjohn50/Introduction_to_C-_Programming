// ATMMachine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using  namespace std;

class ATM {

public:

	float bankBalance;

	ATM() {

		bankBalance = 100;
	}

	//check balance

	void checkBalance() {
		cout << "We have $" << bankBalance << endl; 
	}

	void depositCash() {
		int money; 
		cout << "How much would you like to enter: " << endl; 
		cin >> money; 
		bankBalance = money + bankBalance; 
		cout << "You have deposited " << money << endl; 
		cout << "Your total balance is now " << bankBalance << endl; 
	}
	void withdrawCash() {
		int cash; 
		cout << "How much do you want to withdraw? " << endl; 
		cin >> cash; 
		if (cash > bankBalance || cash % 20 != 0)
		{
			cout << "Not enough money or can't be divided by 20" << endl; 
			cout << "Your current balance is " << bankBalance << endl; 
		}
		else
		{
			bankBalance -= cash; 
			cout << "You get $ " << cash << endl; 
			cout << "Your current balance is " << bankBalance; 
		}

	}

};


int main()

{

	ATM myMachine;
	int choice; 

		while (1)
		{
			cout << "Press 1 to check balance" << endl; 
			cout << "Press 2 to deposit money" << endl; 
			cout << "Press 3 to withdraw cash" << endl; 
			cout << "Press anything else to exit" << endl;
			cin >> choice; 
			switch (choice)
			{
			case 1: myMachine.checkBalance();
				break; 
			case 2: myMachine.depositCash(); 
				break; 
			case 3: myMachine.withdrawCash();
				break; 
			default:
				exit(1); 
	}
			system("pause");
			return 0;
	}

