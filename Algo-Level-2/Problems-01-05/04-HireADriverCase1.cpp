/*
--------------------------------------------------
🧠 Problem: Hire a driver first case
📁 Level: 02 - Algorithms
🎯 Topic: Structures / Basic I/O
👩‍💻 Author: Nyx0x01
--------------------------------------------------

📌 Description:
Write a program to ask the user to enter his/her:
• Age
• Driver license
Then Print “Hired” if his\her age is grater than 21 and s/he has a driver license, otherwise Print “Rejected”

🧮 Input:
A single integer N (1 ≤ N ≤ 10^6) 
A boolean value 0 or 1

📤 Output:
Hired or rejected a string

🔁 Example:
Input: 26 & 1
Output: Hired

🧩 Approach:
- Use a structure to group inputs
- Read Inputs
- Boolean function to check provided condition
- Print final decision

🧪 Test Cases:
Input: 21 & 0 → Output: Rejected
Input: 21 & 1 → Output: Rejected
Input: 17 & 1 → Output: Rejected
Input: 26 & 0 → Output: Rejected
Input: 30 & 1 → Output: Hired
--------------------------------------------------
*/
#include <iostream>

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
