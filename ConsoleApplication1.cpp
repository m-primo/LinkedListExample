// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>

using namespace std;

struct node
{
	int data;
	node* nexxt;
};

node* home = NULL;
node* tail = NULL;
node* current = NULL;


int main()
{
	int input;
	cout << "Enter your number to save in the linked list ( Entering -1 will print the list) :  ";
	cin >> input;
	while (input!=-1)
	{
		current = new node;

		current->data = input;

		if (home == NULL)
		{
			home = current;
			tail = current;
		}
		else
		{
			tail->nexxt = current;
			tail = current;
		}
		cout << "Enter your number to save in the linked list ( Entering -1 will print the list) :  ";
		cin >> input;
	}

	current = home;
	cout << "\n   Your List    " << endl;
	while (current!=NULL)
	{

		cout << "The number is " << current->data << endl;
		current = current->nexxt;

	}

	

	


    return 0;
}

