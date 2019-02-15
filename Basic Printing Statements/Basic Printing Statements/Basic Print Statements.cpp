// Day1ofWorkClass.cpp : Defines the entry point for the console application. //

#include "stdafx.h"
//standard library that is required for Visual Studios// 
#include <ctime>
//Library for time// 
#include <Windows.h>
//Library used for color of background //
#include <cstdlib>
//Library used for color of text //
#include <tchar.h>
#include <sstream> // Allows for user input cin to be used// 
#include <string> //Allows for string to be used. A string uses " ", but it contained within a varible // 

#include <iostream> // standard header used in C++ and standard stream objects it defines the inputs and outputs such as cin and cout //
using namespace std; // std tells the complier to standard workplace 
					 // the standard protocol for printing the document // 
					 //C++ was dervied from programming language C//

int main() // main part of the program in which most of code into// 
{
	string userinput = " ";
	string birth = " ";

	cout << "Enter your name " << endl;
	getline(cin, userinput);
	cout << "Enter your birthday " << endl;
	getline(cin, birth); //get the result from the line and 
	cout << "Your name is " + userinput + " and your birthday is " + birth << endl;
	int x = 0; // int allows you to set integer values to a varible// 
	int y = 2;
	cout << "x is equal to " << x << endl;
	cout << "y is equal to " << y << endl;
	if (x < y) // If statements uses boolean logic, so that if the if statement is true than it will do what is in the {}. If it is false than it will not do what in the {} rather it will exit the if statement or  
	{
		cout << "y is greater than x " << endl;
	}
	else
	{
		cout << "x is greater than y" << endl;
	}

	for (int i = 0; i < 16; i++) //used to make something occur mutiple times. The amount depends.// 
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i); // I am not sure what this does, but the result cause the colors to emerge// 
		cout << "Hello, "; // Printing the result that is in C++  //
		cout << "Welcome "; // cout is stream object. Basically it tells the complier to look at the thing in quotes //
		cout << "to "; // << tell the compiler to use the thing in quotes after it //
		cout << "Introduction ";  // ; are used to end the current line//
		cout << "to "; // endl: used to tell the statement to printed to the next line//	 
		cout << "Programming!!! \n"; // \n: similar to how endl goes to the tels computer to print to the next line//
	}
	cout << endl;
	int hour;
	cout << "Enter your current hour in miltary time" << endl;
	cin >> hour;
	if (hour < 12)
	{
		cout << "Good Morning" << endl;
	}
	else if (hour >= 12 && hour < 17)
	{
		cout << "Good Afternoon" << endl;
	}
	else
	{
		cout << "Good Night" << endl;
	}
	// The program up above uses the user input time in military time, so that the complier will display message based on their current time// 
	system("pause");
	return 0; // tells the computer to stop reading the thing in the main operation //  


} // curvy braces tell the program to where it starts and ends 

  /* Notes:
  Intergrated  Developement Enviroment (IDE): Used to write code
  Complier: Used to turn the IDE into computer language (0's and 1's)
  */