/*
--------------------------------------------------
🧠 Problem: Print Numbers from 1 to N
📁 Level: 02 - Algorithms
🎯 Topic: Loops / Basic I/O
👩‍💻 Author: Nyx0x01
--------------------------------------------------

📌 Description:
Write a program that prints numbers from 1 to N on separate lines.

🧮 Input:
A single integer N (1 ≤ N ≤ 10^6)

📤 Output:
Print numbers from 1 to N, each on a new line.

🔁 Example:
Input: 5
Output:
1
2
3
4
5

🧩 Approach:
- Use a simple for loop from 1 to N
- Print each number

🧪 Test Cases:
Input: 3 → Output: 1 2 3
Input: 1 → Output: 1

--------------------------------------------------
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int ReadNumber() {
    int number;

    cout << "Enter A Number: \n";
    cin >> number;
    
    return number;
}

void PrintNumbersFrom1ToN(int num) {
    for (int i = 1; i <= num; i++) {
        cout <<"\n" << i << endl;
    }
}
int main()
{
    PrintNumbersFrom1ToN(ReadNumber());
    return 0;
}

