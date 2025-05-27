#include <iostream>
#include <string>

using namespace std;
int ReadNumber(string Message) {
	int Number;
		cout << Message << endl;
		cin >> Number;
	return Number;
}

void PrintNumberToThePowers2_3_4(int Number) {
	int P2, P3, P4;
	P2 = Number * Number;
	P3 = P2 * Number;
	P4 = P3 * Number;
	cout << "\nYour Number to the power 2 = " << P2 << endl;
	cout << "Your Number to the power 3 = " << P3 << endl;
	cout << "Your Number to the power 4 = " << P4 << endl;
}
int main()
{
	PrintNumberToThePowers2_3_4(ReadNumber("Enter a number"));
	return 0;
}
