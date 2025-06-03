#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enDayOfWeek{Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7};

int ReadPositiveNumber(string Message, int From, int To) {
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);
	return Number;
}

enDayOfWeek ReadDayOfWeek() {

	return (enDayOfWeek)ReadPositiveNumber("Enter number of day:", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day) {
	switch (Day) {
	case enDayOfWeek::Sat:
		return "Saturday";
		break;
	case enDayOfWeek::Sun:
		return "Sunday";
		break;
	case enDayOfWeek::Mon:
		return "Monday";
		break;
	case enDayOfWeek::Tue:
		return "Tuesday";
		break;
	case enDayOfWeek::Wed:
		return "Wednesday";
		break;	
	case enDayOfWeek::Thu:
			return "Thursday";
			break;	
	case enDayOfWeek::Fri:
				return "Friday";
				break;	
	default:
		return "Invalid Day Number";
		break;
	}
}
int main()
{

	cout << "It's " << GetDayOfWeek(ReadDayOfWeek());

	return 0;
}

