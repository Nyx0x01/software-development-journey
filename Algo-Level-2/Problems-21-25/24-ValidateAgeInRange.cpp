#include <iostream>
#include <cmath>
#include <string>

using namespace std;

short ReadAge() {
    short Age;

    cout << "Enter Your Age: \n";
    cin >> Age;

    return Age;
}

bool ValidateAgeInRange(short number, int From, int To) {
    return (number >= From && number <= To);
}

void PrintAge(short Age) {
    if (ValidateAgeInRange(Age, 18, 45))
        cout << Age <<" is a Valid Age \n";
    
    else 
        cout << Age <<"is an Invalid Age \n";
    
}

int main()
{
    PrintAge(ReadAge());
    return 0;
}
