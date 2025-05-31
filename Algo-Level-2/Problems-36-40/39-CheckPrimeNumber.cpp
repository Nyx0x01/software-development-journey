#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeNotPrime{Prime = 1, NotPrime = 2};

int ReadNumber(string Message) {
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enPrimeNotPrime CheckPrime(int Number) {
	float M = round(Number / 2);

	for (int i = 2; i <= M; i++) {
		if (Number % i == 0) {
			return enPrimeNotPrime::NotPrime;
		}
	}

	return enPrimeNotPrime::Prime;
}

void PrintNumberType(float Number) {
	if (CheckPrime(Number)) {
		cout << Number << " = Prime Number \n";
	}
	else {
		cout << Number << " = Not A Prime Number \n";

	}
}
int main()
{
	float Number = ReadNumber("Please enter a positive number: \n");
	PrintNumberType(Number);

	return 0;
}


