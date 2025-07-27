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

int ReverseNumber(int Number) {
    int rem = 0;
    int Number2 = 0;
    while (Number > 0) {
        rem = Number % 10;
        Number /= 10;
        Number2 = Number2 * 10 + rem;
    }


    return Number2;
}

void PrintReversedNumber(int reversed) {
    cout << "Your reversed number = " << reversed << endl;
}

int main()
{

    PrintReversedNumber(ReverseNumber(ReadPositiveNumber("Enter a multi digit positive number:")));

    return 0;
}


