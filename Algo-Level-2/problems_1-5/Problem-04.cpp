#include <iostream>
#include <string>
#include <cmath>

using namespace std;
struct stInfo {
	int Age;
	bool HasDrivingLicense;
};

stInfo ReadData() {
	stInfo info;

	cout << "Enter your age: \n";
	cin >> info.Age;

	cout << "Do you drive: \n";
	cin >> info.HasDrivingLicense;

	return info;
}

bool isAccepted(stInfo Info) {
	 
	return (Info.Age >= 21 && Info.HasDrivingLicense);
}

void PrintFinalDecision(bool decision) {
	if (decision) {
		cout << "Congrats you are hired :) \n";
	}
	else {
		cout << "Im sorry you are rejected";
	}
}
int main(){
  
PrintFinalDecision(isAccepted(ReadData()));
  return 0;
}
