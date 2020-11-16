//============================================================================
// Name        : Temperature.cpp
// Author      : Hasnain Ali
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Fahrenheit to Celsius or Vice-Versa
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Hello! Welcome to Temperature Converter. This program will convert temperature from fahrenheit to celsius or vice-versa." << endl; 
	cout << " " << endl; 
	cout << " " << endl;
	cout << "I hope you enjoy!" << endl; 
	cout << "Please press any key and push enter to begin the program. :D" << endl; 
	string anyletter; 
	cin >> anyletter; 
	
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "What would you like to convert to?" << endl; 
	cout << "If you would like to convert from celsius to fahrenheit, please enter \"CF\" (WITHOUT QUOTES) and if you would to convert from fahrenheit to celsius, please enter \"FC\" (WITHOUT QUOTES)." << endl;
	cout << " " << endl; 
	cout << "NOTE: This program is not case sensitive, but only the letters \"CF\" or \"FC\" (WITHOUT QUOTES) should be inputted in order for the program to work." << endl; 
	string choice; 
	cin >> choice;
	
	if (choice == "CF" or choice == "cf" or choice == "Cf" or choice == "cF")
	{
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Please enter the celsius temperature that you would like to convert to fahrenheit." << endl;
		float ctof, resultf;
		cin >> ctof;
		cout << " " << endl; 
		
		resultf = (ctof * 1.8) + 32.0;
		
		cout << "Your temperature in fahrenheit is: " << resultf << " fahrenheit." << endl;   
		
		cout << " " << endl;
		cout << " " << endl;
		 
		cout << "Thank you for using this program which converts temperature from fahrenheit to celsius (and vice-versa)." << endl;
		
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Please push and letter and press enter to continue." << endl;
		string anyletter3; 
		cin >> anyletter3;
		
		cout << " " << endl;
		cout << " " << endl;
		cout << "Please enter any letter to terminate this program." << endl;
		string anyletter2; 
		cin >> anyletter2; 
		
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "This Program Was Made By:" << endl; 
		cout << "Hasnain Ali," << endl; 
		cout << "Edison, New Jersey, 08820," << endl;
		cout << "John P. Stevens," << endl; 
		cout << "Freshman Class of 2020." << endl; 
		
	}
	
	if (choice == "FC" or choice == "fc" or choice == "fC" or choice == "Fc")
	{
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Please enter the fahrenheit temperature that you would like to convert to celsius." << endl; 
		float ftoc, resultc; 
		cin >> ftoc; 
		cout << " " << endl; 
		
		resultc = (ftoc - 32) / 1.8;
		
		cout << "Your temperature in celsius is: " << resultc << " celsius." << endl; 
		
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Please push and letter and press enter to continue." << endl;
		string anyletter3; 
		cin >> anyletter3;
		
		cout << " " << endl;
		cout << " " << endl;
		 
		cout << "Thank you for using this program which converts temperature from fahrenheit to celsius (and vice-versa)." << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "Please enter any letter to terminate this program." << endl;
		string anyletter2; 
		cin >> anyletter2; 
		
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "This Program Was Made By:" << endl; 
		cout << "Hasnain Ali," << endl; 
		cout << "Edison, New Jersey, 08820," << endl;
		cout << "John P. Stevens," << endl; 
		cout << "Freshman Class of 2020." << endl; 
		
	}
	
		
	if (choice != "fc" and choice != "FC" and choice != "fC" and choice != "Fc" and choice != "CF" and choice != "cf" and choice != "cF" and choice != "Cf") 
	{ 
		cout << " " << endl; 
		cout << "OOPS! \"" << choice << "\" is not a valid entry. Please rerun the program and try again. Thanks!" << endl; 
		
	}
	
	return 0;
}