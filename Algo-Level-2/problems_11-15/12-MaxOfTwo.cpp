#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadNumbers(int &num1, int &num2) {
	
	cout << "Enter Number 1: \n";
	cin >> num1;

	cout << "Enter Number 2: \n";
	cin >> num2;
}

int MaxOf2Numbers(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}

void PrintResult(int max) {
	cout << "Max of your 2 entered numbers = " << max << endl;
}

int main()
{
	int num1, num2;
	ReadNumbers(num1, num2);
	PrintResult(MaxOf2Numbers(num1, num2));
	return 0;
}



