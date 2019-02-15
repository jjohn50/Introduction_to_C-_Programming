// PhoneBook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream> 
using namespace std;

void newContact()
{
	ofstream pb("Phonebook.txt", ios::app);
	pb.open("Phonebook.txt");
	string name; 
	string phone;
	cout << "Enter the name of the person you want to add and their phone number" << endl;
	cin >> name;
	cin >> phone;
	pb << name << " " << phone << endl;
	pb.close();
}
void searchContact()
{
	string target;
	cout << "Who are you looking for?" << endl;
	cin >> target;
	ifstream infile("Phonebook.txt");
	string name, phonenum;
	while (infile >> name >> phonenum)
	{
		if (name == target)
		{
			cout << name << " : " << phonenum << endl;
			break;
		}
		else
		{
			cout << "Can't find it" << endl;
			break;
		}
	}
}
void displayAll()
{
	ifstream infile("Phonebook.txt");
	string name, phone2;
	while (infile >> name >> phone2)
	{
		cout << name << " " << phone2 << endl;
	}
	cout << "\n\n";
}
int main()
{
	int num;
	while(1){
		cout << "Press 1 to add a new contact," << endl;
		cout << "Press 2 to search for a contact," << endl;
		cout << "Press 3 to display all contacts, and Anything else to quit" << endl;
		cin >> num;
		switch (num)
		{
		case 1:
			newContact();
			break;

		case 2:
			searchContact();
			break;

		case 3:
			displayAll();
			break;

		default:
			exit(1);

		}
	}
	system("pause");
	return 0;
}

