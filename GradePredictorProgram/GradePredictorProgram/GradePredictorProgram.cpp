// GradePredictorProgram.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std; 


int main()
{
	int midcount, finalcount, finalg, midterm, temp;
	int hwcount; 
	double sum, total; 
	cout << "How many homework assigments do you have?" << endl;
	cin >> hwcount; 
	int hwtotal[hwcount] = {};
	for (int i = 0; i << hwcount; i++)
	{
		int grade; 
		cout << "Enter your hw grades (Enter whole numbers)" << endl; 
		cin >> grade; 
		hwtotal[0] = grade; 
	}
	cout << 
	cout << "Enter your homework grades " << endl;


		//sum += gfc[t]; 
	}
	cout << "Enter your midterm grade" << endl; 
	cin >> midterm; 
	cout << "Enter your final grade" << endl; 
	cin >> finalg; 
	float hw, midterm1, final1, midtermw, finalw, hww, midterm2, final2 , hw2; 
	cout << "What are your homework, midterm, and final weights (in demical form)?" << endl; 
	cin >> hw, midterm1, final1; 
	midterm2 = midterm*midterm1; 
	final2 = finalg*finalw; 
	hw2= ((sum / a))*(hw); 
	total = midterm2 + final2 + hw2; 
	if (total >= 91)
	{
		cout << "Congrats you got an A" << endl; 
	}
	else if(total <91 && total >81)
	{
		cout << "You got an B" << endl; 
	}
	else if(total >=80 && total <=71 )
	{
		cout << "You got a C" << endl; 
	}
	else
	{
		cout << "You got a D" << endl; 
	}
	system("pause"); 

    return 1;
}

