// MethodsandClasses.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std; 

string cost(string item)
{
	string cost;
	if (item == "Hamburger")
	{
		cost = "$2.50";
		return cost;
	}
	else if (item == "Steak")
	{
		cost = "$10.00";
		return cost;
	}
	else if (item == "Salad")
	{
		cost = "$5.00";
		return cost;
	}
	else
	{
		cost = "$3.50";
		return cost;
	}
}

int main()
{
	int ppl; 
	string food; 
	cout << "How many ppl are in your shop" << endl; 
	cin >> ppl; 
	cout << " Which item would you like: Hamburger, Steak, Salad, or Pancakes" << endl; 
	cin >> food; 
	cout << " Your disk is the following " << food << " and it will cost: " << cost(food) << endl; 
	int *p; 
	int t = 23;
	system("pause"); 
    return 1;
}


