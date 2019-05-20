#include "pch.h"
#include "class.h"
#include "stdlib.h"
#include <string>
#include <iostream>

using namespace std;
//human
void character::set_mh(int mh)
{
	max_health = mh;
}

void character::set_ms(int ms)
{
	max_stamina = ms;
}

int character::get_mh() const
{
	return max_health;
}

int character::get_ms() const
{
	return max_stamina;
}
//zombie
void zombie::set_z_type(std::string get)
{
	z_type = get;
}
void zombie::set_z_speed(int s)
{
	z_speed = s;
}
std::string zombie::get_z_type()
{
	return z_type;
}
int zombie::get_z_speed()
{
	return z_speed;
}
//alien
void alien::set_a_type(std::string get)
{
	a_type = get;
}
void alien::set_a_speed(int s)
{
	a_speed = s;
}
std::string alien::get_a_type()
{
	return a_type;
}
int alien::get_a_speed()
{
	return a_speed;
}

void alien::printInfo(bool x)
{
	cout << "\nAlien Max Health: " << max_health;
	cout << "\nAlien Max Stamina: " << max_stamina;
}

void alien::printInfo(int x)
{
	cout << "\nAlien Type: " << a_type;
	cout << "\nAlien Speed: " << a_speed;
}

void zombie::printInfo(bool x)
{
	cout << "\nZombie Max Health: " << max_health;
	cout << "\nZombie Max Stamina: " << max_stamina;
}

void zombie::printInfo(int x)
{
	cout << "\nZombie Type: " << z_type;
	cout << "\nZombie Speed: " << z_speed;
}
