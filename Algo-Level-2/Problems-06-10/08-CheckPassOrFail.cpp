#include <iostream>

using namespace std;

enum enPassOrFail{pass = 1, fail = 2};
int ReadMark() {
	int mark;

	cout << "Enter your mark: \n";
	cin >> mark;

	return mark;
}

enPassOrFail CheckMark(int Mark) {
	if (Mark >= 50) {
		return enPassOrFail::pass;
	}
	else {
		return enPassOrFail::fail;
	}
}

void PrintFinalResult(enPassOrFail result) {
	if (result == enPassOrFail::pass) {
		cout << "You have PASSED :) \n";
	}
	else {
		cout << "You have FAILED :( \n";
	}
}
int main()
{
	PrintFinalResult(CheckMark(ReadMark()));
	return 0;

}
