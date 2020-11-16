//============================================================================
// Name        : Rect_P.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : 2016
// Description : Calculate volume of a rectangular prism.
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// This is the Rect_P program. 
	
	cout << "Hello user! Welcome to a simple program developed in C++ that has the ability to calculate the volume of a rectangular prism." << endl; 
	cout << " " << endl; 
	cout << "In order to use this program, please input the numbers of the rectangular prism respective to the instructions. Hope you enjoy!!" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "To continue, please press any character." << endl;
	
	string any_letter;
	
	cin >> any_letter; 
	
	double length, width, height; 
	 
	cout << " " << endl; 
	
	cout << "Please input the length of your rectangular prism, and then press enter." << endl;
	cin >> length;
	cout << " " << endl; 
	cout << "Please input the width of your rectangular prism, and then press enter." << endl; 
	cin >> width; 
	cout << " " << endl; 
	cout << "Please input the height of your rectangular prism, and then press enter." << endl; 
	cin >> height;
	cout << " " << endl; 
	cout << "CALCULATING. Please wait." << endl; 
	cout << " " << endl; 
	cout << "The volume of a rectangular prism is" << " " << length * width * height << " " << "..." << endl; 
	cout << " " << endl; 
	cout << "If the length is" << " " << length << "." << endl; 
	cout << " " << endl; 
	cout << "If the width is" << " " << width << "." << endl; 
	cout << " " << endl; 
	cout << "If the height is" << " " << height << "." << endl; 
	cout << " " << endl; 
	
	string any_lettertwo; 
	
	cout << "Please input any character to end the program." << endl; 
	cin >> any_lettertwo;
	
	cout << " " << endl; 
	cout << " " << endl; 
	
	cout << "Thank you so much for using this program! I hope you enjoyed it! :D" << endl; 
	
	string any_letter3; 
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Please enter any letter to terminate the program." << endl; 
	cin >> any_letter3; 
	
	return 0;
}
