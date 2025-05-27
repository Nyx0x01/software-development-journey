#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message) {
	int Num;

	cout << Message << endl;
	cin >> Num;

	return Num;
}

int CalculatePowerOfNumber(int Num, int M) {
	if (M == 0) {
		return 1;
	}

	int P = 1;

	for (int i = 1; i <= M; i++)
	{
		P *= Num;
	}

	return P;
}

void PrintNumberToThePowerM(int P, int Num, int M) {
	cout << "\n" << Num << " To the power " << M << " = " << P << endl;
}
int main()
{
	int Num, M;

	Num = ReadNumber("\nEnter your desired number ?\n");
	M = ReadNumber("\nEnter the power of your power ?\n");

	PrintNumberToThePowerM(CalculatePowerOfNumber(Num, M), Num, M);
  
	return 0;
}
