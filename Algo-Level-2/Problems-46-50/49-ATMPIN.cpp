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

bool CheckPIN(int PIN, int OgPIN) {
	return PIN == OgPIN;
}

void PrintBalance(int PIN, int OgPIN,int Balance) {
	while (!CheckPIN(PIN, OgPIN)) {
		PIN = ReadPositiveNumber("Wrong PIN try again");
}
	cout << "Your Balance = " << Balance << endl;
}

int main()
{
	const int Balance = 7500;
	const int OriginalPIN = 1234;
	int PIN = ReadPositiveNumber("Enter your PIN:");
	PrintBalance(PIN, OriginalPIN, Balance);


	return 0;
}


