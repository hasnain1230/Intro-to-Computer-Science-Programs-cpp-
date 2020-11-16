//============================================================================
// Name        : Int_Ops.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int number1, number2, sum, difference, product, quotient, remainder; 
	number1 = 3;
	number2 = 5;
	
	sum = number1 + number2;
	difference = number1 - number2;
	product = number1 * number2;
	quotient = number1 / number2;
	remainder = number2 % number1; 
	
	cout << " The Sum Of " <<number1<< " and " << number2<< " is " << sum <<endl; 
	cout << " The Difference of " <<number1<< " and " <<number2<< " is " <<difference <<endl; 
	cout << " The Product of " <<number1<< " and " <<number2<< " is " <<product <<endl; 
	cout << " The Quotient of " <<number1<< " and " <<number2<< " is " <<quotient<< " remainder " <<remainder<< endl;
	cout << "                                                                " << endl; 
	cout << "This is a simple printing program using assigned number values."<< endl; 
	return 0;
}
