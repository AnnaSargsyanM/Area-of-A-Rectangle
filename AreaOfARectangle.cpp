//****************************************************************************************************
//     File:               AreaOfARectangle.cpp
// 
//     Student:            Anna Sargsyan
// 
//     Assignment:         Program #3
// 
//     Course Name:        Programming I
// 
//     Course Number:      COSC 1550-01
// 
//     Due:                February 3, 2023
//
//     This program outputs the message "The area of the rectangle." on the screen.
//
//****************************************************************************************************

#include <iostream>
using namespace std;

//****************************************************************************************************

int main()
{
	double lenght,
		   width,
		   area;

	cout << "This program will calculate the area of the rectangle for you.\n" << endl;
	cout << "Please enter the length of the rectangle: ";

	cin >> lenght;
	cout << "Please enter the width of the rectangle: ";
	cin >> width;

	area = lenght * width;

	cout << "The area of the rectangle: " << area << endl;

	return 0;
}

//****************************************************************************************************

/*

This program will calculate the area of the rectangle for you.

Please enter the length of the rectangle: 10
Please enter the width of the rectangle: 5
The area of the rectangle: 50

*/