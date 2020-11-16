//============================================================================
// Name        : High.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Hello! Welcome to a program that will determine what grade of high school you are in." << endl; 
	cout << "Enjoy!" << endl; 
	
	cout << endl; 
	cout << "Please push any letter and press enter to continue." << endl; 
	string anyletter;
	cin >> anyletter; 
	cout << "Alright, let's begin! :D" << endl; 
	
	cout << endl; 
	cout << endl; 
	
	int gradyear;
	
	cout << "Please input what your year of graduation is. If you input a year of graduation that is not for high school, you will be instructed that you are not in high school." << endl; 
	cin >> gradyear; 
	
	switch(gradyear)
	{ 
	case 2020:
		cout << "You are a freshman in high school (Grade 9)." << endl; 
	break;
	
	case 2019: 
		cout << "You are a sophmore in high school (Grade 10)." << endl; 
	break; 
	
	case 2018:
		cout << "You are a junior in high school (Grade 11)." << endl; 
	break;
	
	case 2017:
		cout << "You are a senior in high school! You're almost done! Have a wonderful time graduating and going to college. Best of luck! :D" << endl; 
	break;
	
	default:
		cout << "You're not in high school!!! Why did you run this program if you are not in high school? Well, okay. You are not in high school because you are graduating in year " << gradyear << ". Please run this program again if you made a mistake when entering your year or if this program did not expect you wanted it to." << endl;
	}

	
	cout << endl; 
	cout << endl; 
	
	cout << "Thank you for using this program. It was made by Hasnain Ali. =)" << endl;
	
	
	
	return 0;
}
