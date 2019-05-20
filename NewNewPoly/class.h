#pragma once
#include <string>

#ifndef CLASS_H
#define CLASS_H

class character
{
protected:

	int max_health;
	int max_stamina;
public:

	character(int mh, int ms) { max_health = mh; max_stamina = ms; }

	void set_mh(int mh);
	void set_ms(int ms);
	int get_mh() const;
	int get_ms() const;
};

class human : public character
{
protected:
	std::string name;
	std:: string gender;
	
public:

	human(int mh, int ms) : character(mh, ms)
	{

	}
	void set_name(std::string);
	void set_gender(std::string);
	std::string get_name();
	std::string get_gender();

};

class zombie : public character
{
protected:
	std::string z_type;
	int z_speed;

public:

	zombie(int mh, int ms) : character(mh, ms)
	{

	}
	void set_z_type(std::string);
	void set_z_speed(int s);
	std::string get_z_type();
	int get_z_speed();

	void printInfo(bool x);
	void printInfo(int x);

};

class alien : public character
{
protected:
	std::string a_type;
	int a_speed;

public:

	alien(int mh, int ms) : character(mh, ms)
	{

	}
	void set_a_type(std::string);
	void set_a_speed(int s);
	std::string get_a_type();
	int get_a_speed();

	void printInfo(bool x);
	void printInfo(int x);

};




#endif