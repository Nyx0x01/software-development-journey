#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadPositiveNumber(string Message) {
	float Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float CalculateMonthlyInstallment(float LoanAmount, float MonthlyPayment) {

	return (float)LoanAmount / MonthlyPayment;
}

void PrintInstallment(float Installment) {
	cout << "You should pay " << Installment << " a month" <<endl;
}
int main()
{
	float LoanAmount, MonthlyPayment;

	LoanAmount = ReadPositiveNumber("Enter your loan amount");
	MonthlyPayment = ReadPositiveNumber("Enter your monthly payment");

	PrintInstallment(CalculateMonthlyInstallment(LoanAmount, MonthlyPayment));

	return 0;
}


