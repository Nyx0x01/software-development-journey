#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

enum enCharType{ smallLetter = 1, capitalLetter = 2, symbol = 3, digit = 4 };

int GenerateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

short ReadPositiveNumber(string message) {
	short Number;

	do {
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

char GenerateRandomCharacters(enCharType ch) {
	switch (ch) {
	case enCharType::smallLetter:
		return char(GenerateRandomNumber(97, 122));
		break;
	case enCharType::capitalLetter:
		return char(GenerateRandomNumber(65, 90));
		break;

	case enCharType::symbol:
		return char(GenerateRandomNumber(33, 47));
		break;

	case enCharType::digit:
		return char(GenerateRandomNumber(48, 56));
		break;

	}
}

string GenerateRandomWords(enCharType ch, short length) {
	string word = "";
	for (int i = 1; i <= length; i++) {
		word += GenerateRandomCharacters(ch);
	}

	return word;
}

string GenerateKey() {

	string key = "";

	key = GenerateRandomWords(enCharType::capitalLetter, 4) + "-";
	key += GenerateRandomWords(enCharType::capitalLetter, 4) + "-";
	key += GenerateRandomWords(enCharType::capitalLetter, 4) + "-";
	key += GenerateRandomWords(enCharType::capitalLetter, 4);

	return key;
}

void PrintGeneratedKeys(short num) {

	for (int i = 1; i <= num; i++) {
		cout << "Key [" << i << "]: " << GenerateKey() << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	PrintGeneratedKeys(ReadPositiveNumber("Enter how many keys do you want? "));
	return 0;
}

