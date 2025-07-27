#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enPrimeNotPrime{Prime = 1, notPrime = 2};

int ReadNumber(string message) {
	int number;
	do {

	cout << message << endl;
	cin >> number;
	} while (number <= 0);

	return number;
}


enPrimeNotPrime CheckPrime(int Num) {
	int M = round(Num / 2);

	for (int i = 2; i <= M; i++) {
		if (Num % i == 0) {
			return enPrimeNotPrime::notPrime;
		}
	}
	return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Num) {
	cout << "Prime Numbers From 1 TO " << Num << " are: \n";
	for (int i = 1; i <= Num; i++) {
		if (CheckPrime(i) == enPrimeNotPrime::prime) {
			cout << i << endl;
		}
		else {
			continue;
		}
	}
}

int main()
{
	PrintPrimeNumbersFrom1ToN(ReadNumber("Enter a pisitive number:"));

	return 0;
}

