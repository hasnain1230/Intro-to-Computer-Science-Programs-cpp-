//============================================================================
// Name        : Dice_Roller.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : My Stuff!
// Description : This program simulates a dice with a certain amount of faces that the user assigns. 
//============================================================================

#include <iostream>
#include <ctime>

using namespace std; 

int dice (unsigned long int faces2);

int main ()
{	
	
	unsigned long int faces;
	float faces3, timesRolled, divisor, average = 0;
	string anything; 
	
	srand (time (0));
	
	cout << "Hello. This program will generate random dice numbers. The die can have as many faces as you'd like." << endl; 
	cout << endl; 
	cout << "Please push button and push enter to begin." << endl; 
	cin >> anything; 
	
	cout << endl; 
	cout << endl; 
	
  cout << "Please enter how many faces you want with the dice (please make less than or equal to 2147483648; that would be nice =))." << endl; 
	cin >> faces; 
	cout << "How many times would you like to roll the " << faces << " sided dice." << endl; 
	cin >> timesRolled; 
	
	divisor = timesRolled;
	
	cout << endl; 
	
	for (int counter = 1; timesRolled > 0; timesRolled--)
	{
	faces3 = dice(faces); 
	average = average + faces3; 
	cout << "Roll " << counter++ << ": " << faces3 << endl; 
	}
	
  float finalAverage = average / divisor;
  
  cout << endl;
  
  cout << "The average of all the die rolled is " << finalAverage << "." << endl; 
	
  return 0;
}

int dice (unsigned long int faces2)
{	 
	return 1 + (rand() % faces2); 
}
