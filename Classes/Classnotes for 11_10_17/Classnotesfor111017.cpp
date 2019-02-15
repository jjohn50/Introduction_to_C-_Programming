// Classnotesfor111017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std; 

//abstarc thoughts
//class of variables: actors who ave attributed and perform functions. 

class VendingMachine {
public:
	//One: Attributes of my actor
	int numberOfCans;
	//Second: What does a new varible of this type looke like ? 
	VendingMachine()
	{
		numberOfCans = 10;
	}
	//Third What function does my actor perform? 
	void dispenanceCoke()
	{
		cout << "Here goes your can of coke" << endl; 
			numberOfCans--;
	}
};

int main()
{
	int choice; 
	VendingMachine myMachine; 

	cout << "So .my vending machine has this: " << myMachine.numbersofCans << endl; 
	myMachine.dispenanceCoke(); 
	cout << "After that, it now has: " << myMachine.numberofCans << endl; 
    return 0;
}

