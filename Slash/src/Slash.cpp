//============================================================================
// Name        : Slash.cpp
// Author      : Hasnain Ali 
// Version     : 1.0.0
// Copyright   : This program outputs a slash shape using asterisks. Depending on the number of asterisks the user wants, this program will output a slash with the number of asterisks the user wanted.
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number, number2, number3; 
	cout << "This program outputs a slash shape using asterisks. Depending on the number of asterisks the user wants, this program will output a slash with the number of asterisks the user wanted." << endl; 
	cout << "Apologies for the unclear directions." << endl; 
	cout << endl; 
	cout << endl; 
	
	cout << "Please input any letter and push enter to begin." << endl; 
	string anyletter; 
	cin >> anyletter; 
	
	cout << endl; 
	cout << endl; 
	
	cout << "Please input the number of asterisks you would like to use in the slash. NO DECIMAL NUMBERS!!!" << endl; 
	cin >> number; 
	number3 = number; 
	number2 = number; 
	number2 = number - 1; 
	number = number - number2; 
  
	cout << endl;
	cout << endl; 
	
	for (; number <= number3; number++)
	{
		cout << setw(number)<< "*" << endl; 
	}
	  
	
	
	return 0;
}