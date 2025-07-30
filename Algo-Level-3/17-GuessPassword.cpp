#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string ReadPassword() {
	string password = "";
	cout << "Enter a password of 3 Letters: (ALL CAPS)\n";
	cin >> password;
	return password;
}

bool GuessPassword(string originalPassword) {
	int count = 0;
	string word = "";

	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				word.append(1, char(i));
				word.append(1, char(j));
				word.append(1, char(k));

				count++;
				cout << "Trial [" << count << "]: " << word << endl;
				if (word == originalPassword) {
					cout << "\nPassword is " << word << "\n";
					cout << "Found after " << count << " Trial(s)\n";
					return true;
				}
				word = "";
			}
			
		}
	}
	return false;
}
int main()
{
	GuessPassword(ReadPassword());
	return 0;
}
