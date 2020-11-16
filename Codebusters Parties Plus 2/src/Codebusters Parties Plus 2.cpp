//============================================================================
// Name        : Codebusters Parties Plus 2.cpp
// Author      : Hasnain Ali 
// Version     : 2.0.0
// Copyright   : Freshman Class of 2020
// Description : This program consists of several modifications of the first Codebusters Parites Plus Bill Generator. See the developer for the changelog. 
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Thank you for using Codebusters Parites Plus. This program will generate a final bill of purchases for a client. The bill will include:" << endl; 
	cout << "The number of adults, the number of children, the costs of adults without desserts, the costs per children without desserts, the room fee, tips and taxes, total cost for adult and child meals, total costs for food, tips and taxes, and room fee." << endl; 
	cout << endl;
	cout << endl;
	cout << "Please push any key and press enter to begin." << endl;  
	string anyletter;
	cin >> anyletter; 
	
	cout << endl;
	cout << endl;
	
	int numadults, numchildren; 
	float meal2, tip_tax, roomfee2, deposit, childmeal, totalcostforallfood, main_tip_tax, totalmealcost, childcost, amountdue, amountdue2, amountdue3, surcharge, discountamount;  
	char roomfee, choiceweekend;
	string meal; 
	
	cout << "NOTE; VERY IMPORTANT: WHEN USING THE PROGRAM, MAKE SURE YOU DO NOT USE ANY SYMBOLS EXCEPT FOR DECIMALS POINTS. DO NOT USE ANY OTHER SYMBOLS, SUCH AS DOLLAR SIGNS ($) OR PERCENTS (%)" << endl; 
	cout << endl;
	cout << endl;
	cout << "Enter any key and push enter to continue. " << endl; 
	string anyletter2;  
	cin >> anyletter2; 
	
	cout << endl;
	cout << endl;
	
	cout << "Number of Adults?" << endl;
	cin >> numadults; 
	
	cout << "Number of children?" << endl;
	cin >> numchildren;
	
	cout << "Will the party have deluxe meals or the standard meals? Please type \"Deluxe\" or \"Standard\" for your meal choice (case-sensitive)." << endl; 
	cin >> meal; 
	if (meal == "Deluxe")
	{
		meal2 = 15.80;
	}
	
	if (meal == "Standard")
	{
		meal2 = 11.75;
	}
	
	cout << "Will you be using room A, B, C, D, or E? Please enter the letter of the room you will be using. (THIS IS CASE-SENSITIVE. PLEASE USE CAPITIAL LETTERS WHEN CHOOSING THE ROOM.)" << endl;
	cin >> roomfee; 
	
	switch (roomfee)
	{
	  case 'A':
	  roomfee2 = 55.00;
	  break;
	  
	  case 'B':
	  roomfee2 = 75.00;
	  break;
	  
	  case 'C':
	  roomfee2 = 85.00;
	  break;
	  
	  case 'D':
	  roomfee2 = 100.00;
	  break;
	  
	  case 'E':
	  roomfee2 = 130.00;
	  break;
	  
	  default:
	  cout << "You did not enter a valid letter. Please re-run the program and try again." << endl;
	}

	cout << "Pre-Deposit?" << endl; 
	cin >> deposit; 
	
	cout << "Will this party be taking place on a weekend (Friday, Saturday, or Sunday)? (Y/N) [Note: Y = Yes and N = No]." << endl;
	cin >> choiceweekend;
	
	cout << endl;
	cout << endl;
	
	tip_tax = 18;
	
	childmeal = meal2 * 0.60;
	totalcostforallfood = (numadults * meal2) + (numchildren * childmeal);
	main_tip_tax = totalcostforallfood * (tip_tax / 100);
	
	cout << "CALCULATING..." << endl; 
	cout << "Please wait..." << endl; 
	cout << "Generating Bill..." << endl;
	cout << "Almost Done..." << endl; 
	cout << "This is the Final Bill:" << endl; 
	
	cout << endl;
	cout << endl;

	
	cout << setw(67) << "Codebusters Parties Plus Final Bill" << endl; 
	cout << setw(67) << "___________________________________" << endl; 
	cout << endl;
	cout << endl;
	cout << setw(50) << "Number of Adults" << setw(17) << numadults << " Adults" << endl;
	cout << setw(50) << "Number of Children" << setw(17) << numchildren << " Children" << endl; 
	cout << setw(50) << "Cost for Adult Meal" << setw(16) << "$ " << setprecision(2) << fixed << meal2 << endl;  
	cout << setw(50) << "Cost for Child Meal" << setw(16) << "$ " << setprecision(2) << fixed << childmeal << endl;  
	cout << setw(50) << "Room Fee" << setw(16) << "$ " << setprecision(2) << fixed << roomfee2 << endl;  
	cout << setw(50) << "Tip and Tax Rate" << setw(16) << "% " << tip_tax << endl;  
	cout << setw(50) << "Pre-Deposit" << setw(16) << "$ " << setprecision(2) << fixed << deposit << endl;  
	
	cout << endl;
	cout << endl;
	cout << endl;
	
	totalmealcost = numadults * meal2;
	childcost = numchildren * childmeal;
	amountdue = totalcostforallfood + main_tip_tax + roomfee2;
	
	cout << setw(50) << "Total for Adult Meals" << setw(15) << setprecision(2) << fixed << "$ " << totalmealcost << endl; 
	cout << setw(50) << "Total for Child Meals" << setw(15) << setprecision(2) << fixed << "$ " << childcost << endl; 
	cout << setw(50) << "Total for ALL Food" << setw(15) << setprecision(2) << fixed << "$ " << totalcostforallfood << endl;
	cout << setw(50) << "Tip and Tax" << setw(15) << "$ " << main_tip_tax << endl;
	cout << setw(50) << "Room Fee" << setw(15) << setprecision(2) << fixed << "$ " << roomfee2 << endl;
	cout << setw(80) << "--------------------------------------------------------------------" << endl; 
	cout << setw(50) << "Subtotal" << setw(15) << setprecision(2) << fixed << "$ " << amountdue << endl; 
	cout << setw(50) << "Pre-Deposit" << setw(15) << "$ " << deposit << endl;
	if (choiceweekend == 'Y')
	{  
		surcharge = amountdue * 0.07;
		amountdue2 = amountdue + surcharge;
		amountdue3 = amountdue2 - deposit; 
		cout << setw(50) << "Surcharge" << setw(15) << "% " << surcharge << endl;
		cout << setw(50) << "Final Total" << setw(15) << "$ " << amountdue3 << endl;
	}
	
	if (choiceweekend == 'N')
	{
		amountdue3 = amountdue - deposit;
		cout << setw(50) << "No Surcharge Since Party Will Not Be On A Weekend" << setw(15) << "$ " << "0.00" << endl;
		cout << setw(50) << "Final Total" << setw(15) << "$ " << amountdue3 << endl; 
		amountdue2 = amountdue; 
	}
	cout << "________________________________________________________________________________________________________________________________________________________________" << endl; 
	
	cout << endl;
	cout << endl;
	
	if (amountdue3 < 100)
	{
		discountamount = (amountdue2 - (amountdue2 * 0.005)) - deposit;
		cout << "Since your bill is less than a hundred dollars, you will recieve a 0.05% discount if you pay within ten days." << endl; 
		cout << "If you pay within ten days, your final bill will be: $ " << discountamount << "." << endl; 
	}
	
	if (amountdue3 >= 100 and amountdue3 < 200)
	{
		discountamount = (amountdue2 - (amountdue2 * 0.015)) - deposit;
		cout << "Since your bill is between one-hundred dollars and two-hundred dollars, you will recieve a 1.5% discount if you pay within ten days." << endl; 
		cout << "If you pay within ten days, your final bill will be: $ " << discountamount << "." << endl; 

	}
	
	if (amountdue3 >= 100 and amountdue3 < 200)
	{
		discountamount = (amountdue2 - (amountdue2 * 0.015)) - deposit;
		cout << "Since your bill is between one-hundred dollars and two-hundred dollars, you will recieve a 1.5% discount if you pay within ten days." << endl; 
		cout << "If you pay within ten days, your final bill will be: $ " << discountamount << "." << endl; 
	}	
	
	if (amountdue3 >= 200 and amountdue3 < 400)
	{
		discountamount = (amountdue2 - (amountdue2 * 0.03)) - deposit;
		cout << "Since your bill is between two-hundred dollars and four-hundred dollars, you will recieve a 3% discount if you pay within ten days." << endl; 
		cout << "If you pay within ten days, your final bill will be: $ " << discountamount << "." << endl;
	}
	
	if (amountdue2 >= 400 and amountdue2 < 800)
	{
		discountamount = (amountdue3 - (amountdue3 * 0.04)) - deposit;
		cout << "Since your bill is between four-hundred dollars and eight-hundred dollars, you will recieve a 4% discount if you pay within ten days." << endl; 
		cout << "If you pay within ten days, your final bill will be: $ " << discountamount << "." << endl;		
	}
	
	if (amountdue3 >= 800)
	{ 
		discountamount = (amountdue2 - (amountdue2 * 0.05)) - deposit;
		cout << "Since your bill is greater than eight-hundred dollars, you will recieve a 5% discount if you pay within ten days." << endl; 
		cout << "If you pay within ten days, your final bill will be: $ " << discountamount << "." << endl;		
	}
	return 0;
}