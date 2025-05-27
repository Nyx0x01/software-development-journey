#include <iostream>
#include <cmath>
#include <string>

using namespace std;

enum enOddOrEven{Odd = 1, Even = 2};

int ReadNumber() {
    int num;

    cout << "Enter a number: \n";
    cin >> num;

    return num;
}

enOddOrEven CheckOddOrEven(int num) {
    if (num % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}

int SumEvenNumbers(int num) {
    int sum = 0;

    for (int i = 1; i <= num; i++) {
        if (CheckOddOrEven(i) == enOddOrEven::Even)
            sum += i;
    }

    return sum;
}

void PrintSumOfEvenNumbers(int sum, int num) {
    cout << "Sum of even numbers between 1 &  "<< num  << " = " << sum << endl;
}
int main()
{
    int Number = ReadNumber();
    PrintSumOfEvenNumbers(SumEvenNumbers(Number), Number);
  
    return 0;
}

