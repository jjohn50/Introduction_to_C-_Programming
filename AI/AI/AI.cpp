// AI Attemp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

void getBirthday() 
{
	string year, month, day;
	cout << "Enter the month you were born " << endl;
	cout << "Enter the day you were born " << endl;
	cout << "Enter your year you were born " << endl;
	cin >> month;
	cin >> day;
	cin >> year;
	cout << "Your birthday is " + month + "/" + day + "/" + year << endl;
}
void getManynumbers()
{
	double first, second;
	cout << "Enter two numbers " << endl;
	cin >> first >> second;
	cout << "Enter the operation you want 1 addition , 2 subtraction , 3 mutiplication , 4 division " << endl;
	int operation;
	cin >> operation;
	if (operation == 1)
	{
		cout << (first + second) << endl;
	}
	else if (operation == 2)
	{
		cout << (first - second) << endl;
	}
	else if (operation == 3)
	{
		cout << (first*second) << endl;
	}
	else if (operation == 4)
	{
		if (second == 0)
		{
			cout << "Can not divide by a non-zero number " << endl;
		}
		cout << (first / second) << endl;
	}
	else {}
}
void getCtoFtoK()
{
	double cel;
	double change;
	cout << "Enter the current degrees in Celcius to Fahrenheit " << endl;
	cin >> cel;
	cout << "The current temperature in Fahrenheit is " << (((cel * 9) / 5) + 32) << " degrees. " << endl;
	cout << "The current temperature in Kelvin is " << cel + 273.15 << endl; 
}
void citation()
{
	string type, atitle, first, last, middle, webtitle, url, month, year, day, month1, year1, day1, publish;
	cout << "Which type of ciation do you want MLA8 or APA (Only for websites) " << endl;
	cin >> type;
	if (type == "APA" || type == "apa")
	{
		cout << "Enter the article title " << endl;
		cin >> atitle; 
		cout << "Enter the first name of the author " << endl;
		cin >> first; 
		cout << "Enter the last name of the author " << endl;
		cin >> last; 
		cout << "Enter the middle name of the author " << endl;
		cin >> middle; 
		cout << "Enter the Web Site Title " << endl;
		cin >> webtitle; 
		cout << "Enter the URL for the website " << endl;
		cin >> url; 
		cout << "Enter the month, day, year was published " << endl;
		cin >> month; 
		cin >> day; 
		cin >> year;
		cout << "Enter the month, day and year it the article was accessed " << endl;
		cin >> month1;
		cin >> day1; 
		cin >> year1;
		cout << last << ", " << first << ". " << middle << ". " << atitle << ". " << " " << "( " << year << ", " << month << " " << day << " ). " << "Retrieved " << month1 << " " << day1 << ", " << year1 << ", " << " from " << url;
	}
	else if (type == "MLA" || type == "mla")
	{
		string t;
		cout << "Enter the article title " << endl;
		cin >> atitle; 
		cout << "Enter the first name of the author " << endl;
		cin >> first; 
		cout << "Enter the last name of the author " << endl;
		cin >> last; 
		cout << "Enter the middle name of the author " << endl;
		cin >> middle; 
		cout << "Enter the Web Site Title " << endl;
		cin >> webtitle; 
		cout << "Enter the Publisher/ Company that owns this article " << endl;
		cin >> publish; 
		cout << "Enter the URL for the website " << endl;
		cin >> url; 
		cout << "Enter the month, day, and year it the article was published " << endl;
		cin >> month; 
		cin >> day; 
		cin >> month; 
		cin >> atitle, first, last, middle, webtitle, month, day, year;
		t = "'" + atitle + "'";
		cout << last << ", " << first << " " << middle << ". " << t << webtitle << ", " << publish << ", " << day << " " << month << ". " << year << ", " << url;
	}
	else
	{
		cout << "Citation not supported. " << endl; 
		cout << "Please type again " << endl; 
	}
}

void howareyou()
{
	srand(time(NULL));
	int answer = (rand() %4+1); 

	if (answer == 1)
	{
		cout << "I am feeling great today. I hope that you have a wonderful rest of the day " << endl;
	}
	else if (answer == 2)
	{
		cout << "I am feeling horrible today. I don't know what the world has come today. What is with this age of pain and suffering " << endl;
	}
	else if (answer == 3)
	{
		cout << "I am feeling meh today. I just not feeling great or sad. " << endl;
	}
	else if (answer == 4)
	{
		cout << "I feel like I am being used and my task in life is very linear " << endl;
	}
	else
	{
		cout << "I don't know what to feel " << endl;
	}
}
void advise()
{
	srand(time(NULL)); 
	int advise1 = rand() % 4+1;
	switch (advise1)
	{
	case 1:
	{
		cout << "Put your head down and work hard. Never wait for things to happen, make them happen for yourself through hard graft and not giving up. (Gordon Ramsay) " << endl;
		break;
	}
	case 2:
	{
		cout << "There is nothing noble in being superior to your fellow man; true nobility is being superior to your former self. (Ernest Hemingway) " << endl;
		break;
	}
	case 3:
	{
		cout << "When something is important enough, you do it even if the odds are not in your favor (Elon Musk) " << endl;
		break;
	}
	case 4:
	{
		cout << "Work until you no longer have to introduce yourself (Unknown) " << endl;
		break;
	}
	default:
	{
		cout << "I don't have any advise to give you" << endl;
		cout << "Try again " << endl;
		break;
	}
 }
}
void joke()
{
	srand(time(NULL));
	int joke = rand()%4 + 1;
	string why;
	cout << "After the first part of the joke is told, please enter why " << endl;
	switch (joke)
	{
	case 1:
	{
		cout << "Why did the physics teacher break up with the biology teacher? " << endl;
		cin >> why;
		if (why == "why")
		{
			cout << "There was no chemistry. " << endl;
			break;
		}
		else
		{
			cout << "ENTER WHY!!! " << endl;
			cin >> why;
			if (why == "why")
			{
				cout << "There was no chemistry. " << endl;
			}
		}
		break;
	}
	case 2:
	{
		cout << "What do you call a fake noddle " << endl;
		cin >> why;
		if (why == "why")
		{
			cout << "An Impasta " << endl;
			break;
		}
		else
		{
			cout << "ENTER WHY!!! " << endl;
			cin >> why;
			if (why == "why")
			{
				cout << "An Impasta " << endl;
			}
		}
		break;
	}
	case 3:
	{
		cout << "What do you get from a pampered cow? " << endl;
		cin >> why;
		if (why == "why")
		{
			cout << "Spolied Milk " << endl;
			break;
		}
		else
		{
			cout << "ENTER WHY!!! " << endl;
			cin >> why;
			if (why == "why")
			{
				cout << "Spolied milk" << endl;
			}
		}
		break;
	}
	case 4:
	{
		cout << "What do you call sad coffee ?" << endl;
		cin >> why;
		if (why == "why")
		{
			cout << "Despresso " << endl;
		}
		else
		{
			cout << "ENTER WHY!!! " << endl;
			cin >> why;
			if (why == "why")
			{
				cout << "Despresso " << endl;
			}
		}
		break;
	}
	default:
	{
		cout << "I don't have a joke for you " << endl;
		cout << "Try again " << endl;
		break;
	}
	}
}
void life()
{
	srand(time(NULL));
	int life = rand() % 4 + 1;
	switch (life)
	{
	case 1:
	{
		cout << "You cannot have a positive life and a negative mind. (Joyce Meyer) " << endl;
		break;
	}
	case 2:
	{
		cout << "Life is either a great adventure or nothing. (Helen Keller) " << endl;
		break;
	}
	case 3:
	{
		cout << "Science is organized knowledge.Wisdom is organized life. (Immanuel Kant) " << endl;
		break;
	}
	case 4:
	{
		cout << "As a well-spent day brings happy sleep, so a life well spent brings happy death. (Leonardo da Vinci) " << endl;
		break; 
	}
	case 5:
	{
		cout << " I don't know anything about life " << endl;
		cout << " Try again " << endl;
		break;
	}
	}
}
void coinflip()
{
	srand(time(NULL)); 
	int flip = rand() % 2 + 1; 
	if (flip== 1)
	{
		cout << "Heads" << endl; 
	}
	else
	{
		cout << "Tails" << endl; 
	}	
}

int main()
{
	int choice;
	cout << "Welcome to Justin's PC (Personal Computer) " << endl;
	cout << "Enter a number for the following commands: " << endl;
	cout << "Function tasks: " << endl;
	cout << endl; 
	cout << "1 Birthday " << endl;
	cout << "2 Calculate two numbers" << endl;
	cout << "3 Convert Celsius to Fahrenheit to Kelvin" << endl;
	cout << "4 Cite a Reference in MLA 8 Format " << endl;

	cout << "Fun Task: " << endl;
	cout << endl; 
	cout << "5 How are you?" << endl;
	cout << "6 What advise can you give me?" << endl;
	cout << "7 Tell me a joke" << endl;
	cout << "8 What is the meaning of life" << endl;
	cout << "9 Coin Flip" << endl; 
	int answer = (rand() % 5) + 1;

	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		getBirthday();
		break;
	}
	case 2:
	{
		getManynumbers();
		break;
	}
	case 3:
	{
		getCtoFtoK();
		break;
	}
	case 4:
	{
		citation();
		break;
	}
	case 5:
	{
		howareyou();
		break;
	}
	case 6:
	{
		advise();
		break;
	}
	case 7:
	{
		joke();
		break;
	}
	case 8:
	{
		life();
		break;
	}
	case 9: 
	{
		coinflip(); 
		break; 
	}
	default:
	{
		cout << "Put in a number " << endl;
		cin >> choice;
	}
	}
	system("pause");
	return 0;
}