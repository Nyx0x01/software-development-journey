#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Problem 06
struct stFullName {
	string FirstName;
	string LastName;
};

stFullName ReadName(){
	stFullName name;
	cout << "Enter your first name: \n";
	cin >> name.FirstName;

	cout << "Enter your last name: \n";
	cin >> name.LastName;

	return name;
}

void PrintName(stFullName name) {
	cout << "Your full name is " << name.FirstName + " " + name.LastName << endl;
}
int main()
{
	
	PrintName(ReadName());
	return 0;

}

