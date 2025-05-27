#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message) {
     
    int Num;

    do {
        cout << Message << endl;
        cin >> Num;
    } while (Num < 0);

    return Num;
}

int CalculateFactorial(int Num) {

    int Fact = 1;

    for (int i = Num; i >= 1; i--) {
        Fact *= i;
    }

    return Fact;
}

int main()
{
    cout << "\nFactorial = " << CalculateFactorial(ReadPositiveNumber("Enter a number \n"));

    return 0;
}

