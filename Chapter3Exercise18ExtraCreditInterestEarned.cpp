/*
Project Name: Chapter 3 Exercise 18 Extra Credit Interest Earned
File Name: Chapter3Exercise18ExtraCreditInterestEarned.cpp
Programmer: Kristen White
Date: 9/25
Requirements: Write a program that asks for the principal, interest
rate, and the number of times the interest is compounded. Display
a report.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double principal, rate, amount, interest;
	int timesCompounded;

	// input values
	
	cout << "Interest Rate (in %): ";
	cin >> rate;
	cout << "Times Compounded: ";
	cin >> timesCompounded;
	cout << "Principal: ";
	cin >> principal;

	// convert the rate to a decimal 
	double rateDecimal = rate / 100.0;

	// calculate the amount
	amount = principal * pow(1 + (rateDecimal / timesCompounded), timesCompounded);

	// calculate the interest
	interest = amount - principal;

	// display the results
	cout << fixed << setprecision(2);
	cout << "\nInterest Rate: " << rate << "%" << endl;
	cout << "Times Compounded: " << timesCompounded << endl;
	cout << "Principal: $" << principal << endl;
	cout << "Interest: $" << interest << endl;
	cout << "Amount in Savings: $" << amount << endl;

	return 0;
}