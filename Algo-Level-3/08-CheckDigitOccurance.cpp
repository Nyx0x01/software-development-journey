#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int  ReadPositiveNumber(string message) {
    int Number;

    do {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int CountDigits(short Digit, int Number) {
    int rem = 0, count = 0;

    while (Number > 0) {
        rem = Number % 10;
        Number /= 10;
        if (rem == Digit) {
            count++;
        }
    }

    return count;
}

int main()
{

    int Number = ReadPositiveNumber("Enter a number of multiple digits:");
    short Digit = ReadPositiveNumber("Enter the digit you want to check its occurance:");
    cout << "Digit " << Digit << " Frequency is " << CountDigits(Digit, Number) << " Time(s)\n";
    return 0;
}


