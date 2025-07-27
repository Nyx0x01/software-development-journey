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

int ReverseDigits(int Number) {
    int rem = 0, Number2 = 0;
    while (Number > 0) {
        rem = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + rem;
    }

    return Number2;
}

void PrintDigitsInOrder(int Number) {

    int rem;

    while (Number > 0) {
        rem = Number % 10;
        Number = Number / 10;
        cout << rem << endl;
    }
}
int main()
{
    PrintDigitsInOrder(ReverseDigits(ReadPositiveNumber("Enter a multi digits number:")));

    return 0;
}


