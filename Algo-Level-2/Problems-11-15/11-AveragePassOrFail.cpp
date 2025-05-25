#include <iostream>

using namespace std;

enum enPassOrFail{pass = 1, fail = 2};

void ReadNumbers(int& Num1, int& Num2, int& Num3) {
	cout << "Enter number 1: \n";
	cin >> Num1;
	
	cout << "Enter number 2: \n";
	cin >> Num2;

	cout << "Enter number 3: \n";
	cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3) {

	return Num1 + Num2 + Num3;
}

float CalculateAverage(int sum) {
	return float(sum / 3);
}

enPassOrFail CheckAverage(float Avg) {
	if (Avg >= 50)
		return enPassOrFail::pass;
	else
		return enPassOrFail::fail;
}

void PrintResult(float Avg) {

	if (CheckAverage(Avg) == enPassOrFail::pass)
		cout << "Your Average is: " << Avg << " Congrats you have passed";
	else
		cout << "Your Average is: " << Avg << " Sadly you have failed";

}


int main()
{
	int Mark1, Mark2, Mark3;
	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(SumOf3Numbers(Mark1, Mark2, Mark3)));
	return 0;
}
