#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int ReadNumber() {
    int number;

    cout << "Enter A Number: \n";
    cin >> number;
    
    return number;
}

void PrintNumbersFrom1ToN(int num) {
    for (int i = 1; i <= num; i++) {
        cout <<"\n" << i << endl;
    }
}
int main()
{
    PrintNumbersFrom1ToN(ReadNumber());
    return 0;
}

