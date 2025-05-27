#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message, int From, int To) {
	int Num;

	do {
		cout << Message << endl;
		cin >> Num;
	} while (Num < 1 || Num > To);

	return Num;

}

char CheckMark(int num) {
    if (num >= 90 && num <= 100) {
		return 'A';
    } else if (num >= 80) {
        return 'B';
    } else if (num >= 70) {
		return 'C';
    } else if (num >= 60) {
        return 'D';
    } else if (num >= 50) {
        return 'E';
    } else {
        return 'F';
    }
}

void PrintMyGrade(char grade) {
	cout << "You have got a/an " << grade << endl;
}

int main()
{
	PrintMyGrade(CheckMark(ReadNumber("Enter your mark \n ", 0, 100)));

	return 0;
}
