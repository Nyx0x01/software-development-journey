#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//Problem 41
float ReadPositiveNumber(string Message) {
	float Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float CalculateDays(float Number) {
	return Number / 24;
}

float CalculateWeeks(float Days) {
	return Days / 7;
}

void PrintResults(float Weeks, float Days) {
	cout << "Total weeks = " << Weeks << endl;
	cout << "Total days = " << Days << endl;
}
int main()
{
	float Days, Weeks,Number;
	Number = ReadPositiveNumber("Please enter total number of hours you have wokred:");
	Days = CalculateDays(Number);
	Weeks = CalculateWeeks(Days);

	PrintResults(Weeks, Days);
	return 0;
}

