#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// Shape Class
class Shape
{
protected:
	int width;
	int height;
public:
	Shape()
	{ width = 0; height = 0; }
	~Shape()
	{}
};

// Triangle derived class

class Triangle : public Shape
{
public:
	int base;
	int height;
	Triangle() : Shape()
	{}
	Triangle(int base, int height) : Shape()
	{}
	int area()
	{
		return (.5*(Triangle::base * Triangle::height));
	}
	~Triangle()
	{}
};

// Rectangle derived class
class Rectangle : public Shape
{
public:
	int width;
	int length;
	Rectangle() : Shape()
	{}
	Rectangle(int length, int width) : Shape()
	{}
	int area()
	{
		return (Rectangle::width * Rectangle::length);
	}
	~Rectangle()
	{}
};

int main()
{
	Triangle tri_1(10, 20);
	Rectangle rec_1(10, 20);

	cout << "The Triangle's area is " << tri_1.area() << endl;
	cout << "The Rectangle's area is " << rec_1.area() << endl;

	return 0;
}

