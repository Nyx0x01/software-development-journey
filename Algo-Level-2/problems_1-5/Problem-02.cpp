#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string ReadName() {
	string name;

	cout << "Enter your Name: \n";
	getline(cin, name);

	return name;
}

void PrintName(string name) {
	cout << "Hello " << name << endl;
}
int main()
{
	PrintName(ReadName());

	return 0;

}


