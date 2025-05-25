#include <iostream>

using namespace std;

struct stMarks {
	int mark1, mark2, mark3;
};

stMarks ReadMarks() {
	stMarks m;

	cout << "Enter First Mark: \n";
	cin >> m.mark1;

	cout << "Enter Second Mark: \n";
	cin >> m.mark2;

	cout << "Enter Third Mark: \n";
	cin >> m.mark3;

	return m;
}

int SumMarks(stMarks m) {
	return m.mark1 + m.mark2 + m.mark3;
}

float CalculateAverage(int sum) {
	return float (sum / 3);
}

void PrintResults(float avg) {

	cout << "Average of your marks: " << avg << endl;
}
int main()
{
	PrintResults(CalculateAverage(SumMarks(ReadMarks())));

	return 0;

}
