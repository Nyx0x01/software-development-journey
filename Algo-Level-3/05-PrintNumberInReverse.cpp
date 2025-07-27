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

void PrintDigits(int Num) {
	int remainder;
	while (Num > 0) {

	remainder = Num % 10;
	Num = Num / 10;
	cout << remainder << endl;
	}
}


int main()
{
	PrintDigits(ReadPositiveNumber("Enter a positive multi digits number:"));
	return 0;
}

