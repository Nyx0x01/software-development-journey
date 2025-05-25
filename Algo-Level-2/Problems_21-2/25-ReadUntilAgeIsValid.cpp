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
bool ValidateNumberInRange(short Num, int From, int To) {
    return(Num >= From && Num <= To);
 }

int ReadUntilAgeIsValid(int From, int To) {
    int Age = 0;
    do {
    
      Age = ReadAge();
    } while (!ValidateNumberInRange(Age, From, To));

    return Age;
}

void PrintValidAge(short Age) {
    if (ValidateNumberInRange(Age, 18, 45)) 
        cout << Age << " is a VALID age \n";
    
    else 
        cout << Age <<" is an INVALID age, Please enter a valid one\n";
}
 int main()
{
     PrintValidAge(ReadUntilAgeIsValid(18,45));
    return 0;
}

