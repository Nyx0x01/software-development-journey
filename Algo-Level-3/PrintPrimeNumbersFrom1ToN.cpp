#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enPrimeNotPrime{prime = 1,notPrime = 2};

int ReadNumber(string message) {
	int number;
	do {

	cout << message << endl;
	cin >> number;
	} while (number <= 0);

	return number;
}


enPrimeNotPrime isPrime(int num) {
	int M = num / 2;

	for (int i = 2; i <= M; i++) {
		if (num % i == 0) {
			return enPrimeNotPrime::notPrime;
		}
	}
	return enPrimeNotPrime::prime;
}

void PrintPrimeNumbersFrom1ToN(int Num) {

	for (int i = 1; i <= Num; i++) {
		if (isPrime(i) == enPrimeNotPrime::prime) {
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

