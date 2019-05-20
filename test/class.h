#pragma once
#include <string>

#ifndef CLASS_H
#define CLASS_H

class class1
{
private:
	int i;
public:
	void set(int);
	int get() const;
};

//this class obtains ans sets variables for the names
//and nouns in the story
class storyNames
{
public:
	std::string user; std::string lab; std::string famous;
	std::string animal; std::string big; std::string city;

	void setNames();
};

class storyNumbers
{
public:
	int years; int money; int day; int month;
	int aNum; int aRemaining; int team;

	void setNumbers();
};

//converts user inputs to proper format for story
class storyConverter : storyNumbers
{
public:
	std::string dayString;
	std::string monthString;

	void dayConvert();
	void monthConvert();

};
#endif
