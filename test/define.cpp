#include "pch.h"
#include "class.h"
#include "stdlib.h"
#include <string>
#include <iostream>

using namespace std;

void class1::set(int a)
{
	i = a;
}

int class1::get() const
{
	return i;
}

//defines the function for setting the names in the story
void storyNames::setNames()
{
	string userInput;
	for (int i = 0; i < 6; i++)
	{
		switch (i)
		{
			//set user
		case 0:
			cout << "What is your last name? ";
			getline(cin, userInput);
			user = userInput;
			break;
			//set lab
		case 1:
			cout << "Enter a noun: ";
			getline(cin, userInput);
			lab = userInput;
			break;
			//set famous
		case 2:
			cout << "Name of a famous person: ";
			getline(cin, userInput);
			famous = userInput;
			break;
			//set animal
		case 3:
			cout << "Enter an amimal: ";
			getline(cin, userInput);
			animal = userInput;
			break;
			//set big
		case 4:
			cout << "What is something that is big? ";
			getline(cin, userInput);
			big = userInput;
			break;
			//set city
		case 5:
			cout << "Name of a city: ";
			getline(cin, userInput);
			city = userInput;
			break;
		}
		system("CLS");
	}
}

//defines the function for setting the numbers in the story
void storyNumbers::setNumbers()
{
	int userInput;
	for (int i = 0; i < 7; i++)
	{
		switch (i)
		{
			//set years
		case 0:
			cout << "Enter a number to represent thousands of years: ";
			cin >> userInput;
			years = userInput;
			break;
			//set money
		case 1:
			cout << "Enter a number to represent money in billions: ";
			cin >> userInput;
			money = userInput;
			break;
			//set day
		case 2:
			cout << "Enter a number ranging from 1 to 28: ";
			cin >> userInput;
			while (userInput < 1 || userInput > 28)
			{
				cout << "Enter a number ranging from 1 to 28: ";
				cin >> userInput;
			}
			day = userInput;
			break;
			//set month
		case 3:
			cout << "Enter a number ranging from 1 to 12: ";
			cin >> userInput;
			while (userInput < 1 || userInput > 12)
			{
				cout << "Enter a number ranging from 1 to 12: ";
				cin >> userInput;
			}
			month = userInput;
			break;
			//set aNum
		case 4:
			cout << "Enter any number: ";
			cin >> userInput;
			aNum = userInput;
			break;
			//set aRemaining
		case 5:
			cout << "Enter a number lower than " << aNum << ": ";
			cin >> userInput;
			while (userInput >= aNum)
			{
				cout << "Enter a number lower than " << aNum << ": ";
				cin >> userInput;
			}
			aRemaining = aNum - userInput;
			break;
			//set team
		case 6:
			cout << "Enter another number of your choice: ";
			cin >> userInput;
			aRemaining = userInput;
			break;
		}
		system("CLS");
	}
}

//changes the int "day" to a string with proper number ending
void storyConverter::dayConvert()
{
	if (day = 1)
	{
		dayString = to_string(day);
		dayString += "st";
	}
	if (day = 2)
	{
		dayString = to_string(day);
		dayString += "nd";
	}
	if (day = 3)
	{
		dayString = to_string(day);
		dayString += "rd";
	}
	if (day > 3)
	{
		dayString = to_string(day);
		dayString += "th";
	}
}

//changes the int "month" to the string version jan - dec
void storyConverter::monthConvert()
{
	switch (month)
	{
	case 1:
		monthString = "January";
		break;
	case 2:
		monthString = "February";
		break;
	case 3:
		monthString = "March";
		break;
	case 4:
		monthString = "April";
		break;
	case 5:
		monthString = "May";
		break;
	case 6:
		monthString = "June";
		break;
	case 7:
		monthString = "July";
		break;
	case 8:
		monthString = "August";
		break;
	case 9:
		monthString = "September";
		break;
	case 10:
		monthString = "October";
		break;
	case 11:
		monthString = "November";
		break;
	case 12:
		monthString = "December";
		break;

	}
}