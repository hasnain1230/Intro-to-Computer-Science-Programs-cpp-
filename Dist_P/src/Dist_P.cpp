//============================================================================
// Name        : Dist_P.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Hello, there! This program will find the distance between two points on a coordinate plane." << endl;
	double point1, point2, point3, point4;
	cout << "I hope you enjoy!" << endl; 
	
	cout << " " << endl;
	cout << " " << endl;
	
	string anyletter; 
	cout << "Please push any key and press enter to launch the Distant Formula Calculator." << endl; 
	cin >> anyletter; 
	
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Please enter the first point you would like to use (point x1 only!)." << endl; 
	cin >> point1; 
	 
	
	cout << "Please enter the second point you would like to use (point x2 only!)." << endl; 
	cin >> point2;
	
	
	cout << "Please enter the third point you would like to use (point y1 only!)." << endl; 
	cin >> point3;
	
	cout << "Please enter the fourth point you would like to use (point y2 only!)." << endl; 
	cin >> point4; 
	
	cout << " " << endl;
	
	cout << "Thank you. Please wait." << endl; 
	cout << " " << endl;
	cout << "CALCULATING... " << endl;  
	
	cout << "The distance between point (" << point1 << "," << point2 << ")" << " and point (" << point3 << "," << point4 << ") " << "is: " << sqrt ((pow (point2-point1,2))) + sqrt ((pow (point4-point3,2))) << endl;
	cout << " " << endl;
	cout << "Please push any key and press enter to continue." << endl;
	string anyletter3;
	cin >> anyletter3;
	
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Thank you for using this program. This program calculates the distance between two points on a coordinate plane." << endl;
	cout << "Using the distance formula - The square root of: (x2 - x1)^2 + (y2 - y1)^2. I hope you enjoyed this program!" << endl; 
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Please push any letter and press enter to terminate this program." << endl;
	string anyletter2; 
	cin >> anyletter2; 
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Good-Bye! :D" << endl;
	return 0;
}
