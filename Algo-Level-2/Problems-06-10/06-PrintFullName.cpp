#include <iostream>

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

string GetFullName(stFullName name, bool Reversed){
	string FullName = "";
	if(Reversed)
	FullName = name.LastName + " " + name.FirstName;
	else
	FullName = name.FirstName + " " + name.LastName;
	return FullName;
}

void PrintName(string FullName) {
	cout << "Your full name is " << FullName << endl;
}
int main()
{
	
	PrintName(GetFullName(ReadName(), true));
	return 0;

}
