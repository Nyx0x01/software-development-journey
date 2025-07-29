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

void PrintPattern(int Num) {
	for (int i = 1; i <= Num; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << "\n";
	}
}
int main()
{
	PrintPattern(ReadPositiveNumber("Enter a positive number:"));
	return 0;
}

