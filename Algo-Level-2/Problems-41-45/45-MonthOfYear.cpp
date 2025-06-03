#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enMonthOfYear{Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12};

int ReadPositiveNumber(string Message, int FROM, int TO) {
	int Number;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < FROM || Number > TO);

	return Number;
}

enMonthOfYear ReadMonthOfYear() {
	return (enMonthOfYear) ReadPositiveNumber("Enter Number Of Your Month", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month) {
	switch (Month) {
	case 1:
		return "January";
		break;
	case 2:
		return "February";
		break;
	case 3:
		return "March";
		break;
	case 4:
		return "April";
		break;
	case 5:
		return "May";
		break;
	case 6:
		return "June";
		break;
	case 7:
		return "July";
		break;
	case 8:
		return "August";
		break;
	case 9:
		return "September";
		break;
	case 10:
		return "October";
		break;
	case 11:
		return "November";
		break;
	case 12:
		return "December";
		break;
	default:
		return "Wrong Month";
		break;
	}
}

void PrintMonthOfYear(string Month) {
	cout << "It's " << Month << endl;
}
int main()
{
	PrintMonthOfYear(GetMonthOfYear(ReadMonthOfYear()));
	return 0;
}

