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

	int sum = 0, Number = 0, count = 1;

	Number = ReadNumber("Enter Number " + to_string(count) + "\n");
	do {
		if (Number == -99) {
			break;
		}
		sum += Number;
		count++;
		Number = ReadNumber("Enter Number " + to_string(count) + "\n");
	} while (Number != -99);

	return sum;
}


int main()
{
	cout << "Result = " << SumNumbers() << endl;

	return 0;
}


