
#include "pch.h"
#include <iostream>
#include "class.h"
#include "stdlib.h"

using namespace std;

//int years = 0; int money = 0; int day = 0; int month = 0; int aNum = 0; int aRemaining = 0; int team = 0;

//puts the inital variables together into a custom story
void storyBuilder()
{
	storyNames namesObj;
	storyNumbers numbersObj;
	storyConverter converterObj;
	namesObj.setNames();
	numbersObj.setNumbers();
	converterObj.dayConvert();
	converterObj.monthConvert();


	system("pause");
	cout << "Captain " << namesObj.user << "," << endl
		<< "\nFor " << numbersObj.years << " thousand years humans have always been aware of the existance of alternate" << endl
		<< "realities and dimensions. Recently though, scientists at " << namesObj.lab << "labs have discovered how to" << endl
		<< "access the dimension known as D-AX6. With the support of " << namesObj.famous << " and the " << namesObj.famous << endl
		<< "Foundation for Scientific Discovery, " << numbersObj.money << " billion dollars were raised to build the interdimensional portal." << endl;
	system("pause");
	system("CLS");
	cout << "The big day finally arrived. On the " << converterObj.dayString << " of " << converterObj.monthString << " the launch of the portal and the first team to dimension" << endl
		<< "D-AX6 was ready. As the exploration team began entering the portal, strange noises similar to that" << endl
		<< "of a distressed " << namesObj.animal << " began ringing through the air." << endl;
	system("pause");
	system("CLS");
	cout << "Suddenly, massive creatures the size of " << namesObj.big << " began flooding out of the portal." << endl
		<< "Fortunatley, the portal was closed before any more than " << numbersObj.aNum << " of these things could get through." << endl
		<< "Currently however, " << numbersObj.aRemaining << " of the " << numbersObj.aNum << " creatures are still wreaking havoc on downtown" << endl
		<< namesObj.city << endl;
	system("pause");
	system("CLS");
	cout << "Due to your extensive history in the U.S. military as a special ops team captain, you have been" << endl
		<< "called upon to help eliminate the remaining creatures before all of " << namesObj.city << " is destroyed." << endl
		<< "Additionally, you will be accomponied by a team of " << numbersObj.team << " highly trained soldiers." << endl
		<< "\n Do you accept this mission Captain " << namesObj.user << "?" << endl;


}

int main()
{
	//class1 obj1;
	//obj1.set(88);
	//std::cout << "The contents: " << obj1.get() << std::endl;
	//storyNames namesObj;
	//storyNumbers numbersObj;

	//namesObj.setNames();
	//numbersObj.setNumbers();

	storyBuilder();


	system("pause");
}

