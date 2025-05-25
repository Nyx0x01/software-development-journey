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
• Recommendation (1 = Yes, 0 = No)

Then:
- Print “Hired” if age > 21 AND has a driver’s license
- OR hire them unconditionally if they have a recommendation
- Otherwise, print “Rejected”

🧮 Input:
- Age (integer)
- Has driver’s license (boolean)
- Has recommendation (boolean)

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
Input: 21 & 0 & 0 → Output: Rejected  
Input: 21 & 1 & 0 → Output: Rejected  
Input: 17 & 1 & 0 → Output: Rejected  
Input: 26 & 0 & 0 → Output: Rejected  
Input: 30 & 1 & 0 → Output: Hired  
Input: 20 & 0 & 1 → Output: Hired
--------------------------------------------------
*/

#include <iostream>

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
