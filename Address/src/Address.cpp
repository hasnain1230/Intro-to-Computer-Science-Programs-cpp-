//============================================================================
// Name        : Address.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 
	string first_name;
	cout << "Please input your first name, and press enter." << endl; 
	cin >> first_name; 
	
	char middle_initial; 
	cout << "Please input your middle inital, and press enter." << endl; 
	cin >> middle_initial; 
	
	string last_name; 
	cout << "Please input your last name, and press enter." << endl; 
	cin >> last_name;
	
	string house_number;
	cout << "Please indicate your house number, and press enter." << endl;
	cin >> house_number;
	
	string street_name;
	cout << "Please indicate your street name, and press enter." << endl;
	cin >> street_name;
	
	string street_type;
	cout << "Please indicate your street type, and press enter." << endl;
	cin >> street_type;
	
	string city; 
	cout << "Please indicate the city you currently live in, and press enter." << endl;
	cin >> city; 
	
	string state; 
	cout << "Please indicate the state you currently live in, and press enter." << endl; 
	cin >> state;
	
	string zip_code;
	cout << "Please indicate in your postal code, and press enter." << endl; 
	cin >> zip_code; 
	
	cout << "                            " << endl; 
	
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl; 
	cout << " " << first_name << " " << middle_initial << "." << " " << last_name << endl; 
	cout << " " << house_number << " " << street_name << " " << street_type << endl; 
	cout << " " << city << "," << " " << state << "," << " " << zip_code << endl; 
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl;
	
	return 0;
}
