#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadNumbers(int& num1, int& num2) {

	cout << "Enter your first number: \n";
	cin >> num1;

	cout << "Enter your second number: \n";;
	cin >> num2;

}

void SwapNumbers(int& A, int& B) {
	int swap;
	swap = A;
	A = B;
	B = swap;
}

void PrintNumbers(int num1, int num2) {
	cout << "\nNumber 1: " << num1 << endl;
	cout << "Number 2: " << num2 << endl;

}
int main()
{
	int num1, num2;
	ReadNumbers(num1, num2);
	PrintNumbers(num1, num2);
	SwapNumbers(num1, num2);
	PrintNumbers(num1, num2);

	return 0;
}



