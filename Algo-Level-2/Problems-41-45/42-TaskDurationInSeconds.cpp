#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stTaskInputs {
	int days, hours, minutes, seconds;
};
float ReadPositiveNumber(string Message) {
	float Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

stTaskInputs ReadTaskInputs() {
	stTaskInputs info;
	info.days = ReadPositiveNumber("Enter Number of days:");
	info.hours = ReadPositiveNumber("Enter Number of hours:");
	info.minutes = ReadPositiveNumber("Enter Number of minutes:");
	info.seconds = ReadPositiveNumber("Enter Number of seconds:");

	return info;
}

float CalculateTaskDuration(stTaskInputs info) {
	float TotalSeconds;
	TotalSeconds = (info.days * 24 * 60 * 60) + (info.hours * 60 * 60) + (info.minutes * 60) + info.seconds;

	return TotalSeconds;
}

void PrintTaskDuration(float TaskDuration) {
	cout << "Total Seconds spent = " << TaskDuration << endl;
}
int main()
{
	PrintTaskDuration(CalculateTaskDuration(ReadTaskInputs()));

	return 0;
}

