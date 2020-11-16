//============================================================================
// Name        : Greatest.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : Freshman Class of 2020
// Description : This program will find the Greatest Common Factor of two numbers inputted by the user.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "This program will find the Greatest Common Factor of two numbers inputted by the user." << endl; 
	cout << endl; 
	cout << "Please press any letter and push enter to continue." << endl; 
	string anyletter; 
	cin >> anyletter; 
	
	cout << endl; 
	cout << endl; 
	
	int num1, num2, devisor; 
	cout << "Please input one of the numbers you wish to find the Greatest Common Factor of. This number must be a whole number." << endl; 
	cin >> num1; 
	cout << "Please input the second number you wish to find the Greatest Common Factor of. This number must be a whole number too." << endl; 
	cin >> num2; 
	
	if (num1 > num2)
	{
		devisor = num2; 
	}
	
	else 
	{
		devisor = num1; 
	}
	
	while ((num1 % devisor != 0 or num2 % devisor != 0))
	{
		devisor = devisor - 1; 
	}
	
	cout << endl; 
	cout << endl; 
	
	cout << "The Greatest Common Factor of " << num1 << " and " << num2 << " is " << devisor << "." << endl; 
	
	cout << endl; 
	cout << endl; 
	
	cout << "Thank you for using this program. It was made by Hasnain Ali." << endl; 
	
	cout << endl; 
	
  

                                                                                                                                                                  
	
	return 0;
}