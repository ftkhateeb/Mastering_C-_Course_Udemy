//============================================================================
// Name        : excercise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>

class rectangle
{
private :
	double width;
	double length;


public :
	//initializing a constructor using an initialzer list
	rectangle(double Width, double Length):width(Width), length(Length)
	{

	}
	//function overloading
	rectangle(double Width): width(Width), length(0)
	{

	}
	double getWidth ()
	{
		return width;
	}
	void setWidth(double Width)
	{
		width = Width;
	}


};

int main()
{
	rectangle rectObj(5,4);

	std::cout<<rectObj.getWidth();


}