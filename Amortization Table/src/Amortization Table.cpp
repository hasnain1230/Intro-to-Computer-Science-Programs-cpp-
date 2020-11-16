//============================================================================
// Name        : Amortization.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : Freshman Class of 2020
// Description : This program will create an amortization table to help track your loan see how long it will take to pay off your loan.
//============================================================================

#include <iostream>  
#include <iomanip>
using namespace std; 

int main() { 
	cout << setprecision(2); 
	cout << fixed; 
	cout << "Thank you for this program program. Its purpose is to create an amortization table to help track your loan see how long it will take to pay off your loan." << endl; 
	cout << endl; 
	cout << "Please press any letter to continue." << endl; 
	string anyletter; 
	cin >> anyletter; 
	
	cout << endl; 
	cout << endl; 
	
	double payment, interest2, interest, principal, principalpaid;
	int month = 1; 
	
	cout << "How much money did you borrow from your bank?" << endl; 
	cin >> principal; 
	cout << "What is the ANNUAL interest rate of your loan (as a whole number without % symbol)?" << endl; 
	cin >> interest;
	
	interest = interest / 100; 
	interest = interest / 12; 
	
	interest2 = principal * interest;
	
	
	while (payment <= interest2) 
	{
	cout << "How much are you paying a month for your loan? (Note: Your monthly payment must be larger than $" << interest2 << ")" << endl; 
	cin >> payment; 
	
	if (payment <= interest2) 
	{
	  cout << endl; 
	  
	  cout << "I am sorry. " << payment << " is not greater than " << interest2 << ". Please try again and input a number greater than or equal to " << interest2 << ", please." << endl; 
	  
	  cout << endl; 
	  cout << endl; 
	  
	  for (int a = 1; a < 1000000000; a++) 
	  {}
	  
	}
	
}
	
	cout << setw(25) << "Month Number" << setw(26) << "Interest Paid" << setw(27) << "Principal Paid" << setw(20) << "Balance" << endl;  
	cout << "    _______________________________________________________________________________________________________" << endl; 
	
	while (principal >= principalpaid)  
	{
	  if (month == 1)
	  {
	    cout << setw(19) << "0" << setw(13) << "$" << setw(18) << "0.00|" << setw(10) << "$" << setw(15) << "0.00|" << setw(8) << "$" << setw(15) << principal << "|" << endl; 
	  }
	
	  interest2 = principal * interest;
	  principalpaid = payment - interest2;
	  principal = principal - principalpaid;
	  
	  cout << setw(19) << month++ << setw(13) << "$" << setw(17) << interest2 << "|" << setw(10) << "$" << setw(14) << principalpaid << "|" << setw(8) << "$"  << setw(15) << principal << "|" << endl;
	  
	}
	
	
	if (principal > 0) 
	{
	interest2 = principal * interest; 
	principalpaid = principal; 
	principal = 0;  
	
	cout << setw(19) << month++ << setw(13) << "$" << setw(17) << interest2 << "|" << setw(10) << "$" << setw(14) << principalpaid << "|" << setw(8) << "$" << setw(15) << principal << "|" << endl;
	}
	return 0;
}