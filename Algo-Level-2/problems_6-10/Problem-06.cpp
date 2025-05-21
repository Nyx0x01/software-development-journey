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

string GetFullName(stFullName name){
	return name.FirstName + " " + name.LastName;
}

void PrintName(string FullName) {
	cout << "Your full name is " << FullName << endl;
}
int main()
{
	
	PrintName(GetFullName(ReadName()));
	return 0;

}

