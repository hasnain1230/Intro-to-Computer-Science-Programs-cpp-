//============================================================================
// Name        : Codebusters Parties Plus.cpp
// Author      : Hasnain Ali 
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Thank you for using Codebusters Parites Plus. This program will generate a final bill of purchases for a client. The bill will include:" << endl; 
	cout << "The number of adults, the number of children, the costs of adults without desserts, the costs per children without desserts, the room fee, tips and taxes, total cost for adult and child meals, total costs for food, tips and taxes, and room fee." << endl; 
	cout << " " << endl;
	cout << " " << endl;
	cout << "Please push any key and press enter to begin." << endl;  
	string anyletter;
	cin >> anyletter; 
	
	cout << " " << endl;
	cout << " " << endl;
	
	int numadults, numchildren; 
	float meal, dessert, roomfee, tip_tax, deposit, childmeal, totalcostforallfood, main_tip_tax, totalmealcost, childcost, dessertcost, amountdue, amountdue2;  
	
	cout << "NOTE; VERY IMPORTANT: WHEN USING THE PROGRAM, MAKE SURE YOU DO NOT USE ANY SYMBOLS EXCEPT FOR DECIMALS POINTS. DO NOT USE ANY OTHER SYMBOLS, SUCH AS DOLLAR SIGNS($) OR PERCENTS (%)" << endl; 
	cout << " " << endl;
	cout << " " << endl;
	cout << "Enter any key and push enter to continue. " << endl; 
	string anyletter2; 
	cin >> anyletter2; 
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Number of Adults?" << endl;
	cin >> numadults; 
	cout << "Number of children?" << endl;
	cin >> numchildren;
	cout << "Cost of adult meal?" << endl; 
	cin >> meal;
	cout << "Cost of dessert?" << endl;
	cin >> dessert;
	cout << "Room Fee?" << endl;
	cin >> roomfee; 
	cout << "Percent of tip and tax? (Only input the percent, no percent symbols or decimals, or the program will not work.)" << endl;
	cin >> tip_tax;
	cout << "Pre-Deposit?" << endl; 
	cin >> deposit; 
	
	cout << " " << endl;
	cout << " " << endl;
	
	childmeal = meal * 0.60;
	totalcostforallfood = (numadults * meal) + (numchildren * childmeal) + (dessert * (numadults + numchildren));
	main_tip_tax = totalcostforallfood * (tip_tax / 100);
	
	cout << "CALCULATING..." << endl; 
	cout << "Please wait..." << endl; 
	cout << "Generating Bill" << endl;
	cout << "Almost Done" << endl; 
	cout << "This is the Final Bill:" << endl; 
	
	cout << " " << endl;
	cout << " " << endl;

	
	cout << setw(67) << "Codebusters Parties Plus Final Bill" << endl; 
	cout << setw(67) << "___________________________________" << endl; 
	cout << " " << endl;
	cout << " " << endl;
	cout << setw(50) << "Number of Adults" << setw(17) << numadults << " Adults" << endl;
	cout << setw(50) << "Number of Children" << setw(17) << numchildren << " Children" << endl; 
	cout << setw(50) << "Cost for Adult Meal" << setw(16) << "$ " << setprecision(2) << fixed << meal << endl;  
	cout << setw(50) << "Cost for Child Meal" << setw(16) << "$ " << setprecision(2) << fixed << childmeal << endl;  
	cout << setw(50) << "Cost for Dessert" << setw(16) << "$ " << setprecision(2) << fixed << dessert << endl; 
	cout << setw(50) << "Room Fee" << setw(16) << "$ " << setprecision(2) << fixed << roomfee << endl;  
	cout << setw(50) << "Tip and Tax Rate" << setw(16) << "% " << tip_tax << endl;  
	cout << setw(50) << "Pre-Deposit" << setw(16) << "$ " << setprecision(2) << fixed << deposit << endl;  
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	totalmealcost = numadults * meal;
	childcost = numchildren * childmeal;
	dessertcost = dessert * (numadults + numchildren);
	amountdue = totalcostforallfood + main_tip_tax + roomfee;
	amountdue2 = amountdue - deposit;
	
	cout << setw(50) << "Total for Adult Meals" << setw(15) << setprecision(2) << fixed << "$ " << totalmealcost << endl; 
	cout << setw(50) << "Total for Child Meals" << setw(15) << setprecision(2) << fixed << "$ " << childcost << endl; 
	cout << setw(50) << "Total for Dessert" << setw(15) << setprecision(2) << fixed << "$ " << dessertcost << endl;
	cout << setw(50) << "Total for ALL Food (INCLUDING DESSERT)" << setw(15) << setprecision(2) << fixed << "$ " << totalcostforallfood << endl;
	cout << setw(50) << "Tip and Tax" << setw(15) << "$ " << main_tip_tax << endl;
	cout << setw(50) << "Room Fee" << setw(15) << setprecision(2) << fixed << "$ " << roomfee << endl;
	cout << setw(80) << "____________________________________________________________________" << endl; 
	cout << setw(50) << "Subtotal" << setw(15) << setprecision(2) << fixed << "$ " << amountdue << endl; 
	cout << setw(50) << "Pre-Deposit" << setw(15) << "$ " << deposit << endl;
	cout << setw(50) << "Final Amount Due" << setw(15) << "$ " << amountdue2 << endl;
	cout << "________________________________________________________________________________________________________________________________________________________________" << endl; 
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	string anyletter3; 
	cout << "Please push any button and push enter to continue." << endl; 
	cin >> anyletter3; 
	
	cout << " " << endl;
	cout << " " << endl;
	
	cout << "Thank you for using this program! This program generates a bill for Codebusters Parties Plus in order for them to systematically bill their customers. Hope you enjoyed this and were able to use it conveniently." << endl; 
	cout << " " << endl;
	cout << " " << endl;

	cout << "Please push any button and push enter to end this program." << endl; 
	string anyletter4; 
	cin >> anyletter4; 
	
	cout << " " << endl;
	cout << " " << endl;

	cout << "Thank you for using this program!" << endl; 
	cout << "It was made by:" << endl; 
	cout << " " << endl;
	cout << "Hasnain Ali" << endl;
	cout << "John P. Stevens High School." << endl; 
	
	return 0;
}
