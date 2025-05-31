#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadNumber(string Message) {
	float Number = 0;
		cout << Message << endl;
		cin >> Number;
	return Number;
}

float SumNumbers() {

	float sum = 0, Number = 0;
	int count = 0;

	Number = ReadNumber("Enter a number \n");
	while (Number != -99) {
		sum += Number;
		count++;
		Number = ReadNumber("Enter a number or -99 to stop");
	}

	return sum;
}

void PrintSum(float Sum) {
	cout << "Sum of all entered numbers = " << Sum << endl;
}
int main()
{
	PrintSum(SumNumbers());

	return 0;
}


