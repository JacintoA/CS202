#include <iostream>
#include <cstdlib>
#include "triangle.h"

using namespace std;

triangle::triangle(int x, int y)
{
	//contructor
	base = x;
	height = y;
	area = x * y;
}

triangle::~triangle()
{
	//deconstructor
	// no deallocation
}

triangle::triangle(const triangle& triangle)
{
	// set numbers
	base = triangle.base;
	height = triangle.height;
	area = triangle.area;
	
}


triangle& triangle::operator = (const triangle& triangle)
{
	if (this != &triangle)
	{
		// set numbers
		base = triangle.base;
		height = triangle.height;
		area = triangle.area;
	}
	// return the current location
	return *this;
		

}

bool triangle::operator==(const triangle& triangle)const 
{
	// Check if triangle 1 is same to others
	if (base == triangle.base && height == triangle.height && area == triangle.area)
	{
		return true;
	}
	else 
	{
		return false;
	}

}

triangle operator + (const triangle& t1, const triangle& t2)
{
	triangle specs;

	specs.base = (t1.base + t2.base);
	specs.height = (t1.height + t2.height);
	specs.area = (specs.base * specs.height * 0.5);

	return specs;
}
 
ostream& operator << (ostream& cout, triangle& triangle)
{
	
	// print out each data member
	cout << endl;
	cout << "Base: " << triangle.base << endl;
	cout << "Height: " << triangle.height << endl;
	cout << "Area: " << triangle.area << endl;
		
	return cout; 

}

ifstream& operator >> (ifstream& fin, triangle& triangle)
{
	fin >> triangle.base;
	fin >> triangle.height;
	triangle.area = (triangle.base *triangle.height * 0.5);
return fin;
} 

