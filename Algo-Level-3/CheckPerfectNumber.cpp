#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enPerfectNotPerfect{Perfect = 1, notPerfect = 2};

int ReadPositiveNumber(string message) {
	int Number;

	do {
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int SumOfNumbers(int Num) {
	int sum = 0;
	for (int i = 1; i < Num; i++) {
		if (Num % i == 0) {
			sum += i;
		}
	}
	return sum;
}


enPerfectNotPerfect CheckPerfectNumber(int Num) {
	if (SumOfNumbers(Num) == Num) {
		return enPerfectNotPerfect::Perfect;
	}
	return enPerfectNotPerfect::notPerfect;
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

