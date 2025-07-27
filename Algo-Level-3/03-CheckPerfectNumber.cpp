#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ReadPositiveNumber(string message) {
	int Number;

	do {
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool isPerfect(int Num) {
	int Sum = 0;
	for (int i = 1; i < Num; i++) {
		if (Num % i == 0) {
			Sum += i;
		}
	}
	return Num == Sum;
}

void PrintPerfectNumbers(int Num) {
	if (CheckPerfectNumber(Num) == enPerfectNotPerfect::Perfect) {
		cout << Num << " is Perfect\n";
	}
	else {
		cout << Num << " is NOT Perfect \n";
	}
}
int main()
{
	PrintPerfectNumbers(ReadPositiveNumber("Enter a positive number:"));
	return 0;
}

