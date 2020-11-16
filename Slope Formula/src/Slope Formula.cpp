//============================================================================
// Name        : Slope.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std; 

int main() {
  cout << "Hello! Welcome to a program that will find the slope of two points for you." << endl; 
  cout << endl; 
  
  cout << "Please press any key and hit enter to continue." << endl; 
  string anyletter; 
  cin >> anyletter; 
  
  cout << endl; 
  cout << endl; 
  
  cout << "Let's begin." << endl; 
  
  cout << endl; 
  
  // __________________________________________________________________________________________________________
  float x1, y1, x2, y2, result1, result2; 
  
  cout << "Please enter the first coordinate point in your first coordinate pair that you would like to use. (X1)" << endl; 
  cin >> x1; 
  cout << "Please enter the second coordinate point in your first coordinate pair that you would like to use. (Y1)" << endl; 
  cin >> y1; 
  cout << "Please enter the first coordinate point in your second coordinate pair that you would like to use. (X2)" << endl;
  cin >> x2;
  cout << "Please enter the second coordinate point in your second coordinate pair that you would like to use. (Y2)" << endl; 
  cin >> y2; 
  
  cout << endl; 
  cout << endl; 
  
  
  
  if (x2-x1 == 0)
  { 
	  result1 = (y2-y1);
	  
	  cout << "Your slope is undefined." << endl; 
	  cout << "The slope is: " << result1 << " / 0" << endl; 
	  
	  cout << endl; 
	  cout << endl; 
	  
	  cout << "Thank you for using this program. Please press any letter and hit enter to continue." << endl; 
	  string anyletter2, anyletter3; 
	  cin >> anyletter2;
	  cout << endl; 
	  
	  cout << "Please press any letter and hit enter to terminate this program." << endl; 
	  cin >> anyletter3; 
	  
	  cout << endl; 
	  
	  cout << "Thank you for using this program. It was made by Hasnain Ali." << endl; 
	  
  }
  
  else 
  { 
	  result2 = (y2-y1)/(x2-x1);
	  cout << "The slope of your two coordinate points is: " << result2 << endl; 
	  
	  cout << endl; 
	  cout << endl; 
		  
	  cout << "Thank you for using this program. Please press any letter and hit enter to continue." << endl; 
	  string anyletter2, anyletter3; 
	  cin >> anyletter2;
	  
	  cout << endl; 
		  
	  cout << "Please press any letter and hit enter to terminate this program." << endl; 
	  cin >> anyletter3; 
		  
	  cout << endl; 
	  
	  cout << "Thank you for using this program. It was made by Hasnain Ali." << endl; 
		  	  
  }
}