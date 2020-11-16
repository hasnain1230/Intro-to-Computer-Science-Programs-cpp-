//============================================================================
// Name        : X Marks The Spot.cpp
// Author      : Hasnain Ali 
// Version     : 1.0.0
// Copyright   : Freshman Class of 2020
// Description : This program will generate an "X" using asterisks. The "X" will use as many asterisks as the user wants.
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Hello! Thank you for using this program! This program will generate an \"X\" using asterisks. The \"X\" will large as the user wants." << endl; 
	cout << endl; 
	cout << "Please enter any letter and push enter to get started." << endl; 
	string anyletter; 
	cin >> anyletter; 
	
	cout << endl; 
	cout << endl; 
	
	int number, y, x, w, z, number2; 
	
	cout << "Please enter how many the asterisks you want ONE line of the \"X\" to use. This means that if you enter \"5\" asterisks, ten asterisks will be used since only 5 are being used on one line of the \"X\"." << endl; 
	cout << endl; 
	cout << "NOTE: You must enter an odd number in order for this program to work. If you use an even number, it will be mathematically impossible to print a symmetrical \"X\" because the center consists of two asterisks." << endl;
	
	cout << endl; 
	
	cout << "Please enter how many asterisks you would like on one line of the \"X\"." << endl; 
	cin >> number;
	
	if (number % 2 != 0)
	{
	number2 = number / 2; 

	x = 2;
	y = number + 2; 
	
	w = (number / 2) + 1; 
	z = 1; 
	}
	
	if (number % 2 == 0)
	{
	number2 = number / 2; 

	x = 2;
	y = number + 1; 
	
	w = number / 2; 
	z = 1; 
	}
	
	cout << endl; 
	cout << endl; 
	
	
  for (; number > 0; number--)
  {
	 if (number > number2)
	 {
	   cout << setw(x++) << "*" << setw(y = y - 2) << "*" << endl; 
	 }
	 
	 if (number <= number2)
	 {
	   cout << setw(w--) << "*" << setw(z = z + 2) << "*" << endl; 
	 }
	 
  }
  
  cout << endl; 
  cout << endl; 
  
  cout << "Thank you for using this program. Its purpose was to make an \"X\" based on how long the user wanted one line of the \"X\" to be." << endl; 
  cout << endl; 
  cout << "This program was made by Hasnain Ali." << endl; 
	
	return 0;
}