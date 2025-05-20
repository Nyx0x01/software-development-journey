#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumber() {
	int Number;

	cout << "Enter a number of your choice: \n";
	cin >> Number;

	return Number;
}

string CheckNumber(int Number) {
	if (Number % 2 != 0) {
		return "Odd";
	}
	return "Even";
}

void PrintResult(string Result) {
	cout << "The number you entered is: " << Result << endl;
}
int main()
{
	PrintResult(CheckNumber(ReadNumber()));
	return 0;

}


