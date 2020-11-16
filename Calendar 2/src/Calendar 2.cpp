//============================================================================
// Name        : Calendar 2.cpp
// Author      : Hasnain Ali	
// Version     : 1.0.0	
// Copyright   : Freshman Class of 2020
// Description : This program will output a calendar for any given month. 
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	string month, dayofweek; 
	int day, day2, week, year, dayofweek2, max, subtractor; 
	cout << "Thank you for using this program. This program will output a calendar for any given month." << endl; 
	cout << endl; 
	
	cout << "Please enter any key and push enter." << endl; 
	string anykey; 
	cin >> anykey; 
	
	cout << endl; 
	cout << endl; 
	
	cout << "Please enter the name of the month you wish to use." << endl; 
	cin >> month;
	cout << "What day of the week does " << month << " start on?" << endl; 
	cin >> dayofweek;
	cout << "Please enter the year you would like to use." << endl; 
	cin >> year;
	
	// A bunch of if-statements coming up since I used string. 
	
	if (dayofweek == "Monday")
	{
		dayofweek2 = 0; 
		max = 6;
		subtractor = 1;
	}
	if (dayofweek == "Tuesday")
	{
		dayofweek2 = -1; 
		max = 5;
		subtractor = 2;
	}
	if (dayofweek == "Wednesday")
	{
		dayofweek2 = -2; 
		max = 4;
		subtractor = 3;
	}
	if (dayofweek == "Thursday")
	{
		dayofweek2 = -3; 
		max = 3;
		subtractor = 4;
	}
	if (dayofweek == "Friday")
	{
		dayofweek2 = -4; 
		max = 2;
		subtractor = 5;
	}
	if (dayofweek == "Saturday")
	{
		dayofweek2 = -5; 
		max = 1;
		subtractor = 6;
	}
	if (dayofweek == "Sunday")
	{
		dayofweek2 = 1; 
		max = 7;
		subtractor = 0; 
	}
	
	if (year % 4 == 0 and year % 100 != 0 and month == "February")
	{
		day = 29 + subtractor; 
		week = 5;
	}
	
	if (year % 4 == 0 and year % 100 == 0 and year % 400 == 0 and month == "February")
	{
	  day = 29 + subtractor; 
	  week = 5;
	}
	
	if (year % 4 == 0 and year % 100 == 0 and year % 400 != 0 and month == "February")
	{
	  day = 28 + subtractor;
	  week = day / 7;
	}
	
	if (year % 4 != 0 and month == "February")
	{
	  day = 28 + subtractor;
	  week = day / 7;
	}
	
	if (month == "April" or month == "June" or month == "September" or month == "November")
	{
	  day = 30 + subtractor; 
	  week = (day / 7) + 1;
		
	}
	
	if (month == "January" or month == "March" or month == "May" or month == "July" or month == "August" or month == "October" or month == "December")
	{
		day = 31 + subtractor; 
		week = (day / 7) + 1;
	}
	
	if (month != "January" and month != "March" and month != "May" and month != "July" and month != "August" and month != "October" and month != "December" and month != "April" and month != "June" and month != "September" and month != "November" and month != "February")
	{
		cout << endl; 
		cout << endl; 
		
		cout << "The month you entered is invaild. Please make sure the first letter is capital and that you entered the correct month." << endl; 
		exit(2);
	}
	
	// End of all the if-statments. No for for the entire program. I promise. 
	
	cout << endl; 
	cout << endl; 
	cout << endl; 
	
	
	cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl; 
	cout << "|" << setw(69) << month << ", " << year << setw(54) << "|" << endl;
	cout << "==================================================================================================================================" << endl; 
	cout << "|                   |Sunday|        |Monday|       |Tuesday|      |Wednesday|      |Thursday|       |Friday|       |Saturday|    |" << endl; 
	cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl; 
	
	for (int counter = 1; counter <= week; counter++)
	{
	  cout << "|Week: " << counter << "|";
		for (day2 = dayofweek2; day2 <= 7 and day2 + ((counter - 1) * 7) <= day; day2++)
		{
		  if (day2 <= 0 and counter == 1)
		  {
		  cout << setw(16); 
			cout << " ";
		  }
	
	    if (counter == 1 and day2 > 0 and day2 + ((counter - 1) * 7) <= max) 
		  {
		  cout << setw(15); 
		  cout << day2 + ((counter - 1) * 7) << "|"; 
		  dayofweek2 = 1;
		  }
		  
		  if (counter > 1)
		  {
		  cout << setw(15); 
			cout << (day2 + ((counter - 1) * 7) - subtractor) << "|"; 
		  }
		}
	  
		
	// Okay, just kidding. Two more.
	  if (counter != week)
	  {
	    cout << "        |" << endl;
	  }
	  
	  cout << endl; 
		
		if (counter >= week)
		{
		  cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl; 
		}
		
		cout << endl; 
	}
	
	cout << "Thank you for using this program. It was made by Hasnain Ali." << endl; 
	return 0;
}