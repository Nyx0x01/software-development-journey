#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enNumberType{Odd = 1, Even = 2};

int ReadNumber() {
	int Number;

	cout << "Enter a number of your choice: \n";
	cin >> Number;

	return Number;
}

enNumberType CheckNumberType(int Number) {
	if (Number % 2 != 0) {
		return enNumberType::Odd;
	}
	return enNumberType::Even;
}

void PrintResult(enNumberType Result) {
	if (Result == enNumberType::Even) {

	cout << "The number you entered is Even\n" ;
	}
	else {
		cout << "The number you entered is Odd\n";

	}
}
int main()
{
	PrintResult(CheckNumberType(ReadNumber()));
	return 0;

}


