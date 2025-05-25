/*
--------------------------------------------------
🧠 Problem: Hire a Driver (Decision Logic)
📁 Level: 02 - Algorithms
🎯 Topic: Structures / Basic I/O
👩‍💻 Author: Nyx0x01
--------------------------------------------------

📌 Description:
Write a program to ask the user to enter:
• Age
• Driver's license (1 = Yes, 0 = No)

Then:
- Print “Hired” if age > 21 AND has a driver’s license
- Otherwise, print “Rejected”

🧮 Input:
- Age (integer)
- Has driver’s license (boolean)

📤 Output:
- String: Hired or Rejected

🔁 Example:
Input:
Recommendation → 1  
Age → 26  
Driving License → 1  

Output:
Congratulations you have been HIRED :)

🧩 Approach:
- Use a structure to group inputs
- Read user input with a function
- Use a boolean function to evaluate hiring logic
- Print final decision based on conditions

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
