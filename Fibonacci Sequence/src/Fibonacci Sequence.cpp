//============================================================================
// Name        : Fibonacci.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : Freshman Class of 2020
// Description : This program will output a certain amount of Fibonacci Numbers. The user may chose the how many numbers you want calculated.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string anykey;
	int choice, x, y, z; 
	
	x = 1; 
	y = 1; 
	
	cout << "This program will output a certain amount of Fibonacci Numbers. You may chose the how many numbers you want calculated." << endl; 
	
	cout << endl; 
	cout << endl; 
	
	cout << "Please press any key to begin." << endl; 
	cin >> anykey; 
	
	cout << endl;  
	cout << endl; 
	
	cout << "How many numbers would you like to output?" << endl; 
	cin >> choice;
	
	cout << endl; 
	cout << endl;
  
  if (choice == 1)
  {
    cout << x << " only." << endl; 
    choice = -100; 
  }
  
  if (choice == 2)
  {
    cout << x << " and " << y << " ." << endl; 
    choice = -100; 
  }
	
  if (choice > 2)
	{
	cout << x << ", " << y << ", ";
	
	choice = choice - 2; 
	}
	for (int counter = 0; counter < choice; counter++)
	{
	z = y + x;
	x = y; 
    y = z;
    
    if (counter < choice - 1)
    {
      cout << z << ", ";
    }
    
    else 
    {
      cout << "and " << z << "." << endl; 
    }
}
	
	return 0;
}

	

	
