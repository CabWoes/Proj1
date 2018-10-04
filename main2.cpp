#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Animal Class
class Animal
{
public:
	string name;
	int age;
	Animal()
	{
		name = ""; age = 0;
	}
	int set_value()
	{}
	~Animal()
	{}
};

// Zebra derived class

class Zebra : public Animal
{
public:
	Zebra() : Animal()
	{}
	Zebra(int age, string name, string birthplace) : Animal()
	{
		cout << "The Zebra " << name << " is " << age << " years old and its birthplace is " << birthplace << "." << endl;
	}
	~Zebra()
	{}
};

// Dolphin derived class

class Dolphin : public Animal
{
public:
	Dolphin() : Animal()
	{}
	Dolphin(int age, string name, string birthplace) : Animal()
	{
		cout << "The Dolphin " << name << " is " << age << " years old and its birthplace is " << birthplace << "." << endl;
	}
	~Dolphin()
	{}
};

int main()
{
	Zebra zbizzle(200, "Joe", "Africa");
	Dolphin dphizzle(5, "Francis", "the ocean");

	return 0;
}
