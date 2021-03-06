// NewNewPoly.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "class.h"
#include "stdlib.h"
#include <sstream>

using namespace std;

int main()
{
	bool check = false;
	alien alien1(100, 100);

	cout << "ALIEN CREATOR:" << endl;
	cout << "Enter your desired Health/Stamina combo. You get 200 points total to distribute between the two stats..." << endl;
	cout << "Health Points: ";

	int temp = 0;
	string userInput = "100";

	while (check == false)
	{
		getline(cin, userInput);

		stringstream int_out(userInput);
		int_out >> temp;
		if (temp <= 200 && temp >= 0)
		{
			check = true;
			alien1.set_mh(temp);
		}
		if (temp > 200 || temp < 0)
		{
			cout << "Enter a number 0 - 200" << endl;
		}
		int remain = 200 - temp;
		alien1.set_ms(remain);
		cout << "With " << temp << " as your Max Health, the remaining " << remain << " will be your Max Stamina" << endl;
	}
	check = false;
	while (check == false)
	{
		cout << "Enter your desired Alien Type:" << endl
			<< "Red, Yellow, or Green" << endl;
		getline(cin, userInput);
		if (userInput == "red" || userInput == "Red")
		{
			alien1.set_a_type(userInput);
			alien1.set_a_speed(100);
			check = true;
		}
		if (userInput == "yellow" || userInput == "Yellow")
		{
			alien1.set_a_type(userInput);
			alien1.set_a_speed(110);
			check = true;
		}
		if (userInput == "green" || userInput == "Green")
		{
			alien1.set_a_type(userInput);
			alien1.set_a_speed(150);
			check = true;
		}
		
	}

	check = false;

	//this initializes and sets data for the sub class "zombie"
	zombie zom1(100, 100);

	cout << "ZOMBIE CREATOR:" << endl;
	cout << "Enter your desired Health/Stamina combo. You get 200 points total to distribute between the two stats..." << endl;
	cout << "Health Points: ";

	temp = 0;
	userInput = "100";

	while (check == false)
	{
		getline(cin, userInput);

		stringstream int_out(userInput);
		int_out >> temp;
		if (temp <= 200 && temp >= 0)
		{
			check = true;
			zom1.set_mh(temp);
		}
		if (temp > 200 || temp < 0)
		{
			cout << "Enter a number 0 - 200" << endl;
		}
		int remain = 200 - temp;
		zom1.set_ms(remain);
		cout << "With " << temp << " as your Max Health, the remaining " << remain << " will be your Max Stamina" << endl;
	}

	check = false;
	while (check == false)
	{
		cout << "Enter your desired Zombie Type:" << endl
			<< "Creep, Fatty, or Jar Head" << endl;
		getline(cin, userInput);
		if (userInput == "creep" || userInput == "Creep")
		{
			zom1.set_z_type(userInput);
			zom1.set_z_speed(200);
			check = true;
		}
		if (userInput == "fatty" || userInput == "Fatty")
		{
			zom1.set_z_type(userInput);
			zom1.set_z_speed(75);
			check = true;
		}
		if (userInput == "jar head" || userInput == "Jar Head" || userInput == "Jar head")
		{
			zom1.set_z_type(userInput);
			zom1.set_z_speed(110);
			check = true;
		}

	}


		
	system("CLS");
	zom1.printInfo(true);
	zom1.printInfo(1);
	alien1.printInfo(true);
	alien1.printInfo(1);
	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
