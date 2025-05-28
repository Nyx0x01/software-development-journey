#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string Message) {
	float Number;

	cout << Message << endl;
	cin >> Number;

	return Number;
}

float CheckPercentage(float Num) {
	float P;

	if (Num >= 10000000) {
		P = 0.01;
	}
	else if (Num >= 500000) {
		P = 0.02;
	}
	else if (Num >= 100000) {
		P = 0.03;
	}
	else if (Num >= 50000) {
		P = 0.05;
	}
	else {
		P = 0;
	}
	return P;
}

float CalcComission(float Num, float P) {
	float Comission = Num * P;

	return Comission;
}

void PrintComission(float Comission) {

	cout << "You get " << Comission << " in comissions" << endl;
}
int main()
{
	float TotalSales, Percentage;
	TotalSales = ReadNumber("Enter your total sales:\n");
	Percentage = CheckPercentage(TotalSales);

	PrintComission(CalcComission(TotalSales, Percentage));

	return 0;
}
