//****************************************************************************************************
//
//     File:               distanceConv.cpp
//
//     Student:            Thomas Tran
//
//     Assignment:         Program #3
//
//     Course Name:        Programming 1
//
//     Course Number:      COSC 1550 - 02
//
//     Due:                September 8, 2023
//
//****************************************************************************************************

#include <iostream>
using namespace std;

int main()
{
	double kilometers,
		miles;

	cout << "Welcome to my Distance Converter!\n" << endl;

	cout << "Please enter the distance in Kilometers." << endl;

	cin >> kilometers;

	miles = kilometers * 0.621371;

	cout << "The distance in miles is: " << miles;

	return 0;
}

//****************************************************************************************************

/*

Welcome to my Distance Converter!

Please enter the distance in Kilometers.
10
The distance in miles is: 6.21371

*/