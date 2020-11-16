//============================================================================
// Name        : Day of Birth.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : Freshman Class of 2020
// Description : This program will tell you what day of the week you were born on based on your birthday! :D
//============================================================================

#include <iostream>
using namespace std;

int main() {
  
  string anyletter, anyletter3;
  
	cout << "Hello! Welcome to Day of Birth. This program will tell you what day of the week you were born on. Follow the instructions and I will do the rest." << endl;
	cout << "If for some reason, you make a mistake when typing, you do not need to worry — just rerun the program and start over. =)" << endl;
	
	cout << endl; 
	
	cout << "Please press any letter and push enter to begin." << endl; 
	cin >> anyletter; 
	
	int day, day2, month, month2, year, year2, total, total2, total3, total4;
	 
	
	cout << "Please enter the day of the month you were born on. (For example, if you were born on the tenth day of January, enter the number \"10\" only!)" << endl; 
	cin >> day;
	
	if (day > 31)
	{
	  cout << endl; 
  	cout << endl;
  	
	  cout << "Please enter a valid day." << endl; 
	  cout << "If you wish to try again, then re-run the program." << endl; 
	  exit(0);
	}
	
	cout << "Please enter the number of the month you were born in and press enter. (For example, if you were born in January, please enter the number \"1\" as it is the first month of the year." << endl; 
	cin >> month;
	
	if (month < 1 or month > 12)
	{
	  cout << endl; 
  	cout << endl;
  	
	  cout << "Please enter a valid month." << endl; 
	  cout << "If you wish to try again, then re-run the program." << endl; 
	  exit(0);
	}
	
	cout << "Please enter the year you were born in and press enter." << endl;
	cin >> year; 
	
	if (year < 1900 or year > 2099)
	{
	  cout << endl; 
  	cout << endl;
  	
	  cout << "I am sorry. This program only calculates your day of birth if you were born anywhere between the year 1900 to 2099." << endl; 
	  cout << "If you wish to try again, then re-run the program." << endl; 
	  exit(0);
	}
	
	cout << endl; 
	cout << endl; 
  
	day2 = day; 
	
	if (year >= 2000)
	{
		day = day2 - 1;
	}
	
	year2 = year % 100; // Last 2 
	total = (year2 / 4) + year2 + day;
	month2 = month;
	
	switch (month2)
	{
	case 1: 
		month2 = 1; 
	break; 
	
	case 2: 
		month2 = 4; 
	break;
	
	case 3: 
		month2 = 4;
	break; 
	
	case 4: 
		month2 = 0;
	break; 
	
	case 5: 
		month2 = 2; 
	break;
	
	case 6: 
		month2 = 5; 
	break; 
	
	case 7: 
		month2 = 0; 
	break; 
	
	case 8: 
		month2 = 3; 
	break; 
	
	case 9: 
		month2 = 6; 
	break; 
	
	case 10: 
		month2 = 1; 
	break;
	
	case 11: 
		month2 = 4;
	break; 
	
	case 12: 
		month2 = 6; 
	break;
	}

  total2 = total + month2;
	 
	if (year % 4 == 0 and year % 100 > 0 and (month == 1 or month == 2) or (year == 2000 and (month == 1 or month == 2)))
  {
	
    total3 = total2 - 1; 
    total4 = total3 % 7; 
    
    switch (total4)
    {
      case 1: 
        cout << "You were born on a Sunday!" << endl; 
      break;
      
      case 2: 
        cout << "You were born on a Monday!" << endl; 
      break;
      
      case 3: 
        cout << "You were born on a Tuesday!" << endl; 
      break;
      
      case 4: 
        cout << "You were born on a Wednesday!" << endl; 
      break;
      
      case 5: 
        cout << "You were born on a Thursday!" << endl; 
      break;
      
      case 6: 
        cout << "You were born on a Friday!" << endl; 
      break;
      
      case 0: 
        cout << "You were born on a Saturday!" << endl; 
      break;
      
    }
  }
  
  else 
  {
    total3 = total2 % 7;
    
    switch (total3)
    {
      case 1: 
        cout << "You were born on a Sunday!" << endl; 
      break;
      
      case 2: 
        cout << "You were born on a Monday!" << endl; 
      break;
      
      case 3: 
        cout << "You were born on a Tuesday!" << endl; 
      break;
      
      case 4: 
        cout << "You were born on a Wednesday!" << endl; 
      break;
      
      case 5: 
        cout << "You were born on a Thursday!" << endl; 
      break;
      
      case 6: 
        cout << "You were born on a Friday!" << endl; 
      break;
      
      case 0: 
        cout << "You were born on a Saturday!" << endl; 
      break;
      
    }
    
  }

  cout << endl; 
  cout << endl; 
  
  cout << "Thank you for using this program. Its purpose was to tell you what day of the week you were born on." << endl;
  cout << endl; 
  cout << "This program was made by Hasnain Ali. Please press any letter and push enter to terminate the program." << endl;
  cin >> anyletter3;
  
	return 0;
}