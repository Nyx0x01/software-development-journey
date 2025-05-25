/*
--------------------------------------------------
🧠 Problem: Print number odd or even
📁 Level: 02 - Algorithms
🎯 Topic: Enums / Basic I/O
👩‍💻 Author: Nyx0x01
--------------------------------------------------

📌 Description:
Write a program that prints takes a number and checks whether its odd or even

🧮 Input:
A single integer N (1 ≤ N ≤ 10^6)

📤 Output:
Print number is odd or even

🔁 Example:
Input: 5
Output: "ODD"


🧩 Approach:
- Use `enum` to classify odd/even
- Read number from user
- Use function to check if a number is odd or even
- Print result


🧪 Test Cases:
Input: 79 → Output: Odd
Input: 72 → Output: Even

--------------------------------------------------
*/

#include <iostream>

using namespace std;

enum enNumberType{Odd = 1, Even = 2};

int ReadNumber() {
	int Number;

	cout << "Enter a number of your choice: \n";
	cin >> Number;

	return Number;
}

enNumberType CheckNumberType(int Number) {
	if (Number % 2 != 0) {
		return enNumberType::Odd;
	}
	return enNumberType::Even;
}

void PrintResult(enNumberType Result) {
	if (Result == enNumberType::Even) {

	cout << "The number you entered is Even\n" ;
	}
	else {
		cout << "The number you entered is Odd\n";

	}
}
int main()
{
	PrintResult(CheckNumberType(ReadNumber()));
	return 0;

}
