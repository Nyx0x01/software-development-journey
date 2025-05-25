#include <iostream>

using namespace std;

int ReadNumber() {
	int number;

	cout << "Enter a number: \n";
	cin >> number;

	return number;

}

float CalculateHalfNumber(int number) {
	float HalfNumber = number / 2;

	return HalfNumber;
}

void PrintResult(float HalfNumber) {

	cout << "Half the number you entered is: " << HalfNumber << endl;

}
int main()
{
	PrintResult(CalculateHalfNumber(ReadNumber()));

	return 0;

}
