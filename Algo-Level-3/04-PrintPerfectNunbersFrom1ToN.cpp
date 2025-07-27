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

	return Sum == Num;
}

void PrintPerfectNumbers(int Num) {
	for (int i = 1; i <= Num; i++) {
		if (isPerfect(i)) {
			cout << i << endl;
		}
	}
}
int main()
{	
	PrintPerfectNumbers(ReadPositiveNumber("Enter a positive number:"));
	return 0;
}

