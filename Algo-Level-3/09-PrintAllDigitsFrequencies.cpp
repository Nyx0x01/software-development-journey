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

int DigitsFrequency(int Number, int Digit) {
    int count = 0, rem = 0;
    while (Number > 0) {
        rem = Number % 10;
        Number /= 10;

        if (Digit == rem) {
            count++;
        }
    }

    return count;
}

void PrintFrequencies(int Number) {
    short DigitFrequency = 0;         
    for (int i = 0; i < 10; i++)
    {
         DigitFrequency = DigitsFrequency(Number, i);

        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequencey is " << DigitFrequency << " Time(s).\n";
        }
    }
}
int main()
{
    PrintFrequencies(ReadPositiveNumber("Enter a multi digits number:"));
    return 0;
}


