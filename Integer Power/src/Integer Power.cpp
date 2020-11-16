//============================================================================
// Name        : Integer Exponets Calculator.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : Freshman Class of 2020
// Description : This program will take any base number to any power designated by the user and display the output. 
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Hello and thank you for using this program." << endl; 
	cout << endl; 
	cout << "This program will take any base number to any power designated by you, the user and then display the final answer." << endl; 
	cout << endl; 
	cout << endl;
	
	cout << "Please press any letter to begin." << endl; 
	string anyletter;
	cin >> anyletter; 
	
	cout << endl; 
	cout << endl; 
	
	int power, power2;
	float base, base2; 
	cout << "Please input the base number you would like to use." << endl; 
	cin >> base; 
	cout << "Please input the power you would like to use." << endl; 
	cin >> power; 
	base2 = base; 
	power2 = power;
	
	if (power < 0)
	{
	power = power * (-1);
	}
	
	if (power == 1)
	{
	  cout << endl; 
	  cout << "The power of any number to the first is simply that number times one." << endl; 
	  cout << endl; 
	  cout << base << "^" << power << " = 1" << endl; 
	}
	
	cout << endl; 
	
	for (; power > 1; power--)
	{
		base = base * base2; 
		if (power == 2 and power2 > 0)
		{
			cout << base << endl; 
		}
		
		if (power2 == 0)
		{
		  cout << "1" << endl; 
		}
		
		if (power2 < 0 and power == 2)
		{
		  cout << "1 / " << base << " or " << 1 / base << "." << endl;   
		}

	}
	
	cout << endl; 
	cout << endl; 
	
	cout << "Please press any letter and push enter to continue." << endl; 
	string anyletter2;
	cin >> anyletter2; 
	
	cout << endl; 
	cout << endl; 
	
	cout << "Thank you for using this program. Its purpose was to find the take any base number provided by the user, to any power, als4o provided by the user." << endl; 
	cout << "I hope this has worked, and I hope you enjoyed." << endl; 
	
	cout << endl; 
	cout << "Thank you for using this program. It was made by Hasnain Ali." << endl; 
	
	cout << endl; 
	
	cout << "Please press any letter and push enter to terminate this program. Thank you! :D" << endl; 
	string anyletter3; 
	cin >> anyletter3; 
	return 0;
}
