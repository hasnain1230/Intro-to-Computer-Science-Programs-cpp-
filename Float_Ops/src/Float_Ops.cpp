//============================================================================
// Name        : Float_Ops.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	string any_letter; 
	
	cout << "This program will serve as a basic calculator. If you put in two numbers, it will add, subtract, multiply, and divide that number. Type any letter to test the program!! Enjoy! :)" << endl;
	cin >> any_letter;
	
	float number1, number2, sum, difference, product, quotient; 
	
	cout << "Please enter the first number you would like to use." << endl; 
	cin >> number1;
	
	cout << "What is the second number you would like to use." << endl; 
	cin >> number2;
	
	cout << "           " << endl;
	cout << "           " << endl;
	cout << "           " << endl;
	cout << "           " << endl;
		
		
		sum = number1 + number2;
		difference = number1 - number2;
		product = number1 * number2;
		quotient = number1 / number2;
		
		cout << " The Sum Of " <<number1<< " and " << number2<< " is " << sum <<endl; 
		cout << " The Difference of " <<number1<< " and " <<number2<< " is " <<difference <<endl; 
		cout << " The Product of " <<number1<< " and " <<number2<< " is " <<product <<endl; 
		cout << " The Quotient of " <<number1<< " and " <<number2<< " is " << quotient << endl;
		cout << "                                                                " << endl; 
		cout << "This is a simple printing program using number values assigned by a user."<< endl; 
		
	
	
	
	
	
	return 0;
}
