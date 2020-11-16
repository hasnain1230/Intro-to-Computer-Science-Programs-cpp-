//============================================================================
// Name        : Calendar.cpp
// Author      : Hasnain Ali	
// Version     : 1.0.0	
// Copyright   : Freshman Class of 2020
// Description : This program will output a calendar for any given month. 
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	string month; 
	int day, day2, week; 
	cout << "Thank you for using this program. This program will output a calendar for any given month." << endl; 
	cout << endl; 
	
	cout << "Please enter any key and push enter." << endl; 
	string anykey; 
	cin >> anykey; 
	
	cout << endl; 
	cout << endl; 
	
	cout << "Please enter the name of the month you wish to use." << endl; 
	cin >> month;
	
	if (month == "February")
	{
		day = 28; 
		week = day / 7;
	}
	
	if (month == "April" or month == "June" or month == "September" or month == "November")
	{
		day = 30; 
	  week = (day / 7) + 1;
		
	}
	
	if (month == "January" or month == "March" or month == "May" or month == "July" or month == "August" or month == "October" or month == "December")
	{
		day = 31; 
		week = (day / 7) + 1;
	}
	
	if (month != "January" and month != "March" and month != "May" and month != "July" and month != "August" and month != "October" and month != "December" and month != "April" and month != "June" and month != "September" and month != "November" and month != "February")
	{
	cout << endl; 
	cout << endl; 
			
	cout << "The month you entered is invaild. Please make sure the first letter is capital and that you entered the correct month." << endl; 
	exit(1);
	}
	
	cout << endl; 
	cout << endl; 
	cout << endl; 
	
	
	cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl; 
	cout << "|" << setw(69) << month << setw(60) << "|" << endl;
	cout << "==================================================================================================================================" << endl; 
	cout << "|                   |Sunday|        |Monday|       |Tuesday|      |Wednesday|      |Thursday|       |Friday|       |Saturday|    |" << endl; 
	cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl; 
	
	for (int counter = 1; counter <= week; counter++)
	{
	  cout << "|Week: " << counter << "|";
		for (day2 = 1; day2 <= 7 and day2 + ((counter - 1) * 7) <= day; day2++)
		{
		  cout << setw(15); 
			cout << day2 + ((counter - 1) * 7) << "|"; 
		}
	  
	  if (counter != week)
	  {
	    cout <<"        |" << endl;
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