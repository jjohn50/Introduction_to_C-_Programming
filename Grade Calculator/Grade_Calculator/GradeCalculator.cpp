// GradeCalculator.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
using namespace std; 

int main()
{
	float hwtotal = 0.0 , midtotal =0.0, finaltotal = 0.0;
	int hwamount = 0, midamount = 0, finalamount = 0; 
	cout << "Enter amount of homework, midterm, and final grades you have" << endl;

	cin >> hwamount;
		cin >> midamount;
	cin >> finalamount; 


	for(int t=0; t<hwamount; t++)
	{
		int hwgrade; 
		cout << "Enter your hw grades" << endl;
		cin >> hwgrade; 
		hwtotal += hwgrade; 
	}


	for (int q = 0; q < midamount; q++)
	{
		int midgrade;
		cout << "Enter your midterm grades: " << endl;
		cin >> midgrade;
		midtotal += midgrade;
	}


	for (int z = 0; z < finalamount; z++)
	{
		int finalgrade;
		cout << "Enter your final grades: " << endl;
		cin >> finalgrade;
		finaltotal += finalgrade;
	}


	float averhw, avermid, averfin, total;
	double hw1 = 0.40, mid1 = 0.40, fin1 = 0.20;
	averhw = ((hwtotal / hwamount));
	avermid = ((midtotal / midamount));
	averfin = ((finaltotal / finalamount));


	float hwall = hw1*averhw;
	float midall = mid1*avermid;
	float finalall = fin1*averfin;
	cout << hwall << " " << midall << " " << finalall<< endl; 
	total = hwall + midall + finalall;


	if (total >= 91)
	{
		cout << "Your got an A" << endl;
	}
	else if (total >= 81 && total < 91)
	{
		cout << "You got an B" << endl;
	}
	else if (total >= 71 && total <= 80)
	{
		cout << "You got an C" << endl;
	}
	else
	{
		cout << "You got a D" << endl;
	}
	system("pause");
	return 1;
}

