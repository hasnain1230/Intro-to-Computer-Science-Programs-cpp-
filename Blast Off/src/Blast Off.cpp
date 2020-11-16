//============================================================================
// Name        : Blast Off.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : Freshman Class of 2020
// Description : This program will simulate an American Space Shuttle Blast Off Timer of ten seconds.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	cout << "Thank you for using this program." << endl; 
	cout << endl; 
	cout << "This program will simulate an American Space Shuttle Blast Off Timer of ten seconds. (Note: Seconds May Not Be Exactly One Second Due to Different Computer Processing Speeds.)" << endl; 
	
	cout << endl; 
	cout << endl; 
	
	cout << "Please enter any key to begin. :D" << endl; 
	string anyletter; 
	cin >> anyletter; 
	
	for (int n = 10; n > -1; n--)
	{
		  
		for (int a = 1; a < 1000000000; a++)
		{}
		
		if (n >= 2 or n == 0)
		{
		  cout << n << " Seconds" << endl; 
		}
		
		else 
		{
		  cout << n << " Second" << endl; 
		}
		
		if (n <= 0)
		{
		  cout << "BLAST OFF!" << endl; 
		}
		
	}
	
  return 0;
}
