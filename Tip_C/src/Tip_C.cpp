//============================================================================
// Name        : Tip_C.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
	cout << "Welcome to Tip Calculator. This program will calculate the tip you need to be paying your waiter." << endl; 
	cout << "The user will input the total amount of the bill, and how much they are wishing to tip their waiter in percent form." << endl; 
	cout << " " << endl;
	
	string anyletter; 
	
	cout << "Please input any charcter to continue." << endl; 
	cin >> anyletter; 
	cout << " " << endl;
	cout << " " << endl;
	
	double bill; 
	
	cout << "Please enter the total amount of the bill." << endl; 
	cin >> bill; 
	
	
	double percent;
	cout << "Please enter how much you would like to tip your waiter." << endl; 
	cin >> percent; 
	
	float result = bill * (percent/100) + bill;
	
	cout << setprecision(2);
	cout << fixed; 
	cout << "The tip of your bill is: $" << bill * (percent/100) << endl; 
	cout << "Your total amount on your bill is: $" << result << endl; 
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Thank you for using this program! I hope you enjoyed! To terminate this program, please press input any character." << endl; 
	string anyletter3; 
	cin >> anyletter3; 
	return 0;
}
