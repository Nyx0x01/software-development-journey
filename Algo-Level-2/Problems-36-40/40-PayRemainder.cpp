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

float CalculateRemainder(float Bill, float Cash) {
	return Cash - Bill;
}

void PrintRemainder(float Remainder, float Bill, float Cash) {
	cout << "Total bill = " << Bill << ", Total cash paid = " << Cash << endl;
	cout << "******************************************** \n";
	cout << "Remainder = " << Remainder << endl;
}
int main()
{
	float TotalBill, CashPaid;

	TotalBill = ReadPositiveNumber("Enter bill amount:");
	CashPaid = ReadPositiveNumber("Enter amount of cash paid:");

	PrintRemainder(CalculateRemainder(TotalBill, CashPaid), TotalBill, CashPaid);

	return 0;
}


