// CS210_Project2_KristenHawkins.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float initialInvestment, monthlyDeposit, annualInterest, months, years;
	float totalAmount, interestAmount, yearlyTotalInterest;


	cout << "***************************************" << endl;
	cout << "**************Date Input***************" << endl;
	cout << "Inital Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of Years: " << endl;

	system("PAUSE");

	cout << "****************************************" << endl;
	cout << "**************Date Input***************" << endl;
	cout << "Inital Investment Amount: $ " << endl;
	cin >> initialInvestment;
	cout << "Monthly Deposit: $" << endl;
	cin >> monthlyDeposit;
	cout << "Annual Interest: $" << endl;
	cin >> annualInterest;
	cout << "Number of Years: $ " << endl;
	cin >> years;
	months = years * 12;

	system("PAUSE");

	totalAmount = initialInvestment;

	cout << endl << "Balance and Interest Without Additional Monthly Deposit" << endl;
	cout << "===============================================================" << endl;
	cout << "Year         Year End Balance          Year End Earned Interest" << endl;
	cout << "---------------------------------------------------------------" << endl;

	for (int i = 0; i < years; i++) {
		interestAmount = ((totalAmount) * (annualInterest / 100));

		totalAmount = totalAmount + interestAmount;

		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << "\t\t\t$" << interestAmount << endl;
	}

	totalAmount = initialInvestment;

	cout << endl << "Balance and Interest Without Additional Monthly Deposit" << endl;
	cout << "===============================================================" << endl;
	cout << "Year         Year End Balance          Year End Earned Interest" << endl;
	cout << "---------------------------------------------------------------" << endl;



	for (int i = 0; i < years; i++) {
		yearlyTotalInterest = 0;

		for (int j = 0; j < 12; j++) {

			interestAmount = (((totalAmount + monthlyDeposit) * (annualInterest / 100)) / 12);

			yearlyTotalInterest = yearlyTotalInterest + interestAmount;

			totalAmount = totalAmount + monthlyDeposit + interestAmount;

		}

		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << "\t\t\t$" << interestAmount << endl;



		totalAmount = totalAmount + interestAmount;

		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << yearlyTotalInterest << endl;
	}

	return 0;
}



   