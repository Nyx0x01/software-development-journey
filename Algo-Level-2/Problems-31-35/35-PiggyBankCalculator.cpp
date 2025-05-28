#include <iostream>
#include <string>

using namespace std;

struct stPiggyBankContent
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

int ReadNumber(string Message) {
	int Num;
	cout << Message << endl;
	cin >> Num;

	return Num;
}

stPiggyBankContent PiggBankInfo() {
	stPiggyBankContent info;
	info.Pennies = ReadNumber("Enter amount of Pennies? \n");
	info.Nickels = ReadNumber("Enter amount of Nickles? \n");
	info.Dimes = ReadNumber("Enter amount of Dimes? \n");
	info.Quarters = ReadNumber("Enter amount of Quarters? \n");
	info.Dollars = ReadNumber("Enter amount of Dollar? \n");
	
	return info;
}

int CalculateTotalPennies(stPiggyBankContent info) {
	int TotalPennies = (info.Pennies * 1) + (info.Nickels * 5) + (info.Dimes * 10) + (info.Quarters * 25) + (info.Dollars * 100);

	return TotalPennies;
}

float CalculateTotalDollars(int TotalPennies) {
	
	return float(TotalPennies) / 100;
}

void PrintTotalAmounts(float TotalDollars, int TotalPennies) {
	cout << "Total Pennies = " << TotalPennies << endl;
	cout << "Total Dollars = " << TotalDollars << endl;
}
int main()
{
	int TotalPennies = CalculateTotalPennies(PiggBankInfo());
	float TotalDollars = CalculateTotalDollars(TotalPennies);
	PrintTotalAmounts(TotalDollars, TotalPennies);

	return 0;
}
