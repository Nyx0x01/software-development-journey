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

void PrintLettersInPattern(int Num) {
	for (int i = 65 + Num - 1; i >= 65; i--) {
		for (int j = 1; j <= Num - ((Num + 65 - 1) - i); j++) {
				cout << char(i) << " ";
			}
		cout << endl;
	}
}
int main()
{
	PrintLettersInPattern(ReadPositiveNumber("Enter a positive Number:"));

	return 0;
}

