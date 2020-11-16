//============================================================================
// Name        : Check-Book.cpp
// Author      : Hasnain Ali 
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : This program emulates a real-life check-book
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Hello! Welcome to your personal check-book. This program will essentially organize your check-book's transactions and withdrawals." << endl;
	cout << "I hope you enjoy this simple program!" << endl; 
	cout << " " << endl;
	cout << " " << endl;
	cout << "Please type any letter and press enter to start the program." << endl; 
	string anyletter; 
	cin >> anyletter; 
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "USER: Please Note: If your log is a transaction, please do not use a positive symbol as it may manipuate the outcome. Only input the number if it is a transaction." << endl; 
	cout << "However, it is a negative transaction, please use the minus sign to represent it. Thank you!" << endl; 
	
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Please type any letter and press enter to begin your digital check-book!! Enjoy!" << endl; 
	string anyletter2; 
	cin >> anyletter2; 
	
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Please input your current balance." << endl; 
	double balance, log1, log2, log3, log4, total; 
	cin >> balance;
	
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Please input your first log value." << endl; 
	cin >> log1; 
	cout << "Please input your second log value." << endl;
	cin >> log2; 
	cout << "Please input the third log value." << endl;
	cin >> log3;
	cout << "Please input the fourth log value you would like to be displayed." << endl; 
	cin >> log4; 
	
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "LOADING CHECKBOOK FILE... " << endl; 
	cout << "ORGANIZING... " << endl;
	cout << "CALCULATING FINAL DEPOSIT..." << endl;
	cout << "PLEASE WAIT..." << endl; 
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	total = balance + log1 + log2 + log3 + log4;
	
	cout << "Transaction/Deposit Name" << setw(57) << "Transaction/Deposit Made" << setw(55) << "Balance" << endl; 
	cout << "________________________" << setw(57) << "________________________" << setw(56) << "________" << endl; 
	cout << " " << endl;
	cout << setprecision(2) << fixed << setw(130) << "$" << setw(9) << balance << endl; 
	cout << "Transaction/Deposit 1" << setw(47) << "$" << setw(9) << setprecision(2) << fixed << log1 << setw(53) << "$" << setw(9) << balance + log1 << endl;
	cout << "Transaction/Deposit 2" << setw(47) << "$" << setw(9) << setprecision(2) << fixed << log2 << setw(53) << "$" << setw(9) << balance + log1 + log2 << endl;
	cout << "Transaction/Deposit 3" << setw(47) << "$" << setw(9) << setprecision(2) << fixed << log3 << setw(53) << "$" << setw(9) << balance + log1 + log2 + log3 << endl;
	cout << "Transaction/Deposit 4" << setw(47) << "$" << setw(9) << setprecision(2) << fixed << log4 << setw(53) << "$" << setw(9) << balance + log1 + log2 + log3 + log4 << endl;
	cout << " " << endl; 
	cout << "Total Balance" << setw(117) << "$" << setw (9) << total << endl; 
	
	cout << " " << endl; 
	cout << " " << endl; 
	
	cout << "Thank you for using this program. The purpose of this program was to simulate a real-life check-book that incorporated the format of a checkbook, four transactions, a starting balance, and an ending balance." << endl; 
	cout << " " << endl; 
	cout << " " << endl; 
	cout << "Thank you for using this program!" << endl; 
	cout << " " << endl; 
	cout << " " << endl; 
	cout << "This Program Was Made By:" << endl; 
	cout << "Hasnain Ali," << endl; 
	cout << "John P. Stevens High School," << endl;
	cout << "Freshman Class of 2020." << endl; 
	
	cout << " " << endl; 
	cout << " " << endl; 
	
	cout << "Please push enter key and press enter to end this program." << endl; 
	string anyletter3; 
	cin >> anyletter3; 
	
	return 0;
}