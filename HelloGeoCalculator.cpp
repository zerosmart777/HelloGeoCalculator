// HelloGeoCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

static const double PI = 3.14159;

int main()
{
	int input_shape;
    cout << "Welcom to Geoculater Please Enter the following\n";
	cout << "Enter 1 : Calculate the Square or Rectangle\n";
	cout << "Enter 2 : Calculate the Triangle\n";
	cout << "Enter 3 : Calculate the Circle\n";
	cout << "Enter 4 : Calculate the Oval\n";
	cout << "Please select your shape : ";
	cin >> input_shape;
	cout << endl;

	if (input_shape == 1) {
		//Calculate Square

		double result_square, width_square, height_square;
		cout << "Please Enter Square or Rectangle width : ";
		cin >> width_square;
		cout << "Please Enter Square or Rectangle Height : ";
		cin >> height_square;
		result_square = width_square * height_square;
		cout << "Result of Square or Rectangle is " << result_square << endl;
	}
	else if (input_shape == 2) {
		//Calculate Triangle

		double result_triangle, width_triangle, height_triangle;
		cout << "Please Enter Triangle width : ";
		cin >> width_triangle;
		cout << "Please Enter Triangle Height : ";
		cin >> height_triangle;
		result_triangle = (1.0 / 2.0) * width_triangle * height_triangle;
		cout << "Result of Triangle is " << result_triangle << endl;
	}
	else if (input_shape == 3) {
		//Calculate Circle

		double result_circle, radius_circle;
		cout << "Please Enter Circle radius : ";
		cin >> radius_circle;
		result_circle = PI * radius_circle * radius_circle;
		cout << "Result of Triangle is " << result_circle << endl;
	}
	else if (input_shape == 4) {
		//Calculate Oval

		double result_oval, minRadius_oval, maxRadius_oval;
		cout << "Please Enter minimum Radius Oval : ";
		cin >> minRadius_oval;
		cout << "Please Enter maximum Radius Oval : ";
		cin >> maxRadius_oval;
		result_oval = PI * minRadius_oval * maxRadius_oval;
		cout << "Result of Oval is " << result_oval << endl;
	}
	else {
		cout << "Error " << endl;
		return 0;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
