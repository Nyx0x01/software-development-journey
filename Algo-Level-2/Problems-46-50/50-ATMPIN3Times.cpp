#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool CheckPIN(int OriginalPIN) {
	int count = 2, PIN;
	do {
		PIN = ReadPositiveNumber("Enter Your PIN:");
		if (PIN != OriginalPIN) {

		if (count != 0) {
			count--;
		}
		else {
			return false;
		}
		}
		else {
			return true;
		}
		

	} while (PIN != OriginalPIN);

}


int main()
{
	const int OriginalPIN = 1234;
	const int Balance = 7500;

	if (!CheckPIN(OriginalPIN)) {
		cout << "CARD LOCKED \n";
	}
	else {
		cout << "Your account balance = " << Balance << endl;
	}


	return 0;
}


