/*
--------------------------------------------------
🧠 Problem: Print user's name
📁 Level: 02 - Algorithms
🎯 Topic: Basic I/O
👩‍💻 Author: Nyx0x01
--------------------------------------------------

📌 Description:
Write a program that prints user's name

🧮 Input:
A string 

📤 Output:
Print User Name

🔁 Example:
Input: Nyx
Output: Hello Nyx


🧩 Approach:
- Use a simple function to read name
- Used getline() to solve space issues
- Print the entered name

🧪 Test Cases:
Input: Mohammed → Output: Hello Mohammed
Input: Aya → Output: Hello Aya

--------------------------------------------------
*/
#include <iostream>

using namespace std;

string ReadName() {
	string name;

	cout << "Enter your Name: \n";
	getline(cin, name);

	return name;
}

void PrintName(string name) {
	cout << "Hello " << name << endl;
}
int main()
{
	PrintName(ReadName());

	return 0;

}
