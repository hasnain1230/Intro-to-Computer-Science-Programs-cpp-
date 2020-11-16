//============================================================================
// Name        : Quadratic.cpp
// Author      : Hasnain Ali 
// Version     : 1.0.0
// Copyright   : Hasnain Ali - Class of 2016-2017
// Description : Solving for "x" in the quadratic formula. 
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Hello. This program will solve quadratic equations with values provided by you, the user." << endl; 
	cout << "Thank you for using this program; please press any letter and push enter to continue this program." << endl; 
	
	string anyletter1; 
	cin >> anyletter1;
	
	cout << " " << endl; 
	cout << " " << endl; 
	
	cout << " " << endl; 
	
	cout << "Let's get started." << endl; 
	
	cout << " " << endl; 
	cout << " " << endl; 
	
	cout << "NOTE: TO MAKE THIS EASIER FOR YOU, MAKE SURE THAT YOUR QUADRATIC IS IN STANDARD FORM." << endl; 
	
	cout << " " << endl; 
	cout << " " << endl; 
	
	float a, b, c, discriminant, zero, quadp, quadn;
	
	cout << "What is the \"a\" value of your equation?" << endl; 
	cin >> a; 
	
	cout << "What is the \"b\" value of your equation?" << endl; 
	cin >> b;
	
	cout << "What is the \"c\" value of your equation?" << endl; 
	cin >> c; 
	
	cout << " " << endl; 
	
	discriminant = ((pow(b,2)) - 4*a*c);
	
	cout << "The discriminant is: " << discriminant << " (Without Square Rooting)."<< endl; 
	if (discriminant < 0)
	{ 
		cout << " " << endl;
		cout << "Your equation does not have any solutions." << endl; 
		
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Thank you for using this program. It's purpose was the use the quadratic formula to solve a quadratic. This program solved for the variable \"x\"." << endl;
		cout << "Please press any letter to continue." << endl; 
		string anyletter2; 
		cin >> anyletter2; 
		
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Please press any letter to terminate this program." << endl;
		string anyletter3;
		cin >> anyletter3; 
		
		cout << " " << endl;
		
		cout << "Thank you for using this program made by Hasnain Ali. I hope you enjoyed." << endl; 
	}
	
	if (discriminant == 0)
	{ 
		zero = -b/(2*a);
		
		cout << " " << endl;
		cout << "Your equation has one solution which is: " << zero << endl;
		
	  
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Thank you for using this program. It's purpose was the use the quadratic formula to solve a quadratic. This program solved for the variable \"x\"." << endl; 
		cout << "Please press any letter to continue." << endl; 
		string anyletter4; 
		cin >> anyletter4; 
		
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Please press any letter to terminate this program." << endl;
		string anyletter5;
		cin >> anyletter5; 
		
		cout << " " << endl;
		
		cout << "Thank you for using this program made by Hasnain Ali. I hope you enjoyed! :D" << endl; 
		
	}
		
	if (discriminant > 0)
	{ 
		quadp = (-b + (sqrt (pow(b,2) - 4*(a*c)))) / (2*a);
		quadn = (-b - (sqrt (pow(b,2) - 4*(a*c)))) / (2*a);
		
		cout << " " << endl; 
		cout << "Your equation has two solutions which are: " << quadp << " and " << quadn << endl; 
		
		
	  	cout << " " << endl;
		cout << " " << endl;
		
		cout << "Thank you for using this program. It's purpose was the use the quadratic formula to solve a quadratic. This program solved for the variable \"x\"." << endl; 
		cout << "Please press any letter to continue." << endl; 
		string anyletter6; 
		cin >> anyletter6; 
		
		cout << " " << endl;
		cout << " " << endl;
		
		cout << "Please press any letter to terminate this program." << endl; 
		string anyletter7;
		cin >> anyletter7; 
		
		cout << " " << endl;
		
		cout << "Thank you for using this program made by Hasnain Ali. I hope you enjoyed! :D" << endl; 
		
	}
	return 0;
	// I do not understand the warning below. 
}