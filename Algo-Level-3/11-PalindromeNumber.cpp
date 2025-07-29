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

int ReverseNumber(int Number) {
	int rem = 0, Number2 = 0;

	while (Number > 0) {
		rem = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + rem;
	}

	return Number2;
}

bool isPalindromeNumber(int Num1) {
	return Num1 == ReverseNumber(Num1);
}

int main()
{
	int Num1 = ReadPositiveNumber("Enter a multi digits number");

	if (isPalindromeNumber(Num1)) {
		cout << Num1 << " is a Palindrome number \n";
	}
	else {
		cout << Num1 << " is not a Palindrome number \n";
	}
	return 0;
}

