#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stInfo {
	int age;
	bool hasDrivingLicense;
	bool hasRecommendation;
};

stInfo ReadData() {
	stInfo info;

	cout << "Do you have a recommendation? \n";
	cin >> info.hasRecommendation;

	cout << "Enter your age: \n";
	cin >> info.age;

	cout << "Do you drive? \n";
	cin >> info.hasDrivingLicense;


	return info;
}

bool isAccepted(stInfo info) {
	if (info.hasRecommendation) {
		return true;
	}
	else {
		return (info.age > 21 && info.hasDrivingLicense);
	}
}

void PrintFinalDecision(bool decision) {
	if (decision) {
		cout << "\n Congratulations you have been HIRED :) \n";
	}
	else {
		cout << "\n Unfortunetly you have been REJECTED :( \n";

	}
}
int main()
{
	PrintFinalDecision(isAccepted(ReadData()));
	return 0;

}


