#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

enum enCharType {smallLetter = 1, capitalLetter = 2, symbol = 3, digit = 4};


int GenarateRandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

char GenerateRandomCharacters(enCharType ch) {
	switch (ch) {
	case enCharType::smallLetter:
		return char (GenarateRandomNumber(97, 122));

	case enCharType::capitalLetter:
		return char(GenarateRandomNumber(65, 90));
	
	case enCharType::symbol:
		return char(GenarateRandomNumber(33, 47));
	case enCharType::digit:
		return char(GenarateRandomNumber(48, 56));
	}
}



int main()
{
	enCharType RandomChar;
	srand((unsigned)time(NULL));
	cout << GenerateRandomCharacters(enCharType::smallLetter) <<endl;
	cout << GenerateRandomCharacters(enCharType::capitalLetter)<<endl;
	cout << GenerateRandomCharacters(enCharType::symbol) << endl;
	cout << GenerateRandomCharacters(enCharType::digit) <<endl;

	return 0;
}
