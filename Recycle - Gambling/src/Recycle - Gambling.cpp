//============================================================================
// Name        : Higher or Lower.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : My stuff!
// Description : The user is to input higher or lower 
//============================================================================

#include <iostream>
using namespace std;

int randomNumber (unsigned long int number)
{	 
	return 1 + (rand() % number); 
}

int main() {

	srand(time(NULL));
	string anything; 
	int number2 = randomNumber(number2);
	char choice; 
	cout << "Thank you for playing Higher or Lower by Hasnain Ali." << endl << endl; 
	cout << "RULES: A number will input on the screen. You're goal is to predict if the next number is higher or lower then the given number." << endl << endl << endl; 
	
	cout << "Push any button and press enter when you are ready! If you would like to quit, please type \"CANCEL\" below (case-sensitive)." << endl; 
	cin >> anything; 
	
	if (anything == "CANCEL")
	{
		exit(0);
	}
	
	do 
	{
	cout << number2 << endl << endl; 
	
	cout << "Higher or Lower? Type \"H\" for higher and \"L\" for lower (NOT case-sensitive)." << endl; 
	cin >> choice;
	
	switch(choice)
	{
	case 'h': 
		choice = 'H'; 
	break; 
	
	case 'l':
		choice = 'L';
	}
	
	return 0;
}
