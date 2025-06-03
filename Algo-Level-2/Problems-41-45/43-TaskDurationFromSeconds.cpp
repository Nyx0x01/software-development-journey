#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stTaskDuration {
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message) {
	int Number;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}


stTaskDuration CalculateTaskDuration( int TotalSeconds) {
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;
	stTaskDuration info;

	info.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	info.NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder %= SecondsPerHour;
	info.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder %= SecondsPerMinute;
	info.NumberOfSeconds = Remainder;

	return info;

}

void PrintTaskDuration(stTaskDuration info) {
	cout << info.NumberOfDays << ":" << info.NumberOfHours << ":" << info.NumberOfMinutes << ":" << info.NumberOfSeconds << endl;
}
int main()
{
	PrintTaskDuration(CalculateTaskDuration(ReadPositiveNumber("Please Enter Total Seconds You Have Worked:")));
	return 0;
}

