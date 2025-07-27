#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadPositiveNumber(string message) {
    int Number;
    do {
    cout << message << endl;
    cin >> Number;
    } while (Number <= 0);

    return Number;
}

int SumOfDigits(int Number) {
    int Remainder = 0, Sum = 0;

    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum += Remainder;
    }

    return Sum;
}

void PrintSumOfDigits(int Sum) {
    cout << "Sum of Digits = " << Sum << endl;
}
int main()
{

    PrintSumOfDigits(SumOfDigits(ReadPositiveNumber("Enter a number of multiple digits:")));
    return 0;
}


