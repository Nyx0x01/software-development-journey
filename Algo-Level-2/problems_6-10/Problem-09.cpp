#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Problem 09
struct stNumbers {
	int num1, num2, num3;
};

stNumbers ReadNumbers() {
	stNumbers n;

	cout << "Enter first number: \n";
	cin >> n.num1;

	cout << "Enter second number: \n";
	cin >> n.num2;

	cout << "Enter third number: \n";
	cin >> n.num3;

	return n;
}

int SumNumbers(stNumbers n) {
	int sum = 0;

	sum = n.num1 + n.num2 + n.num3;

	return sum;
}

void PrintResult(int sum) {
	cout << "Summation of entered numbers: " << sum << endl;
}
int main()
{
	PrintResult(SumNumbers(ReadNumbers()));
	return 0;

}

