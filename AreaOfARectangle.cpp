//     This program calculates the area of a rectangle.
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
