/*
--------------------------------------------------
🧠 Problem: Print Numbers from N to 1
📁 Level: 02 - Algorithms
🎯 Topic: Loops / Basic I/O
👩‍💻 Author: Nyx0x01
--------------------------------------------------

📌 Description:
Write a program that prints numbers from N to 1 on separate lines.

🧮 Input:
A single integer N (1 ≤ N ≤ 10^6)

📤 Output:
Print numbers from N to 1, each on a new line.

🔁 Example:
Input: 5
Output:
5
4
3
2
1

🧩 Approach:
- Use a simple for loop from N to 1
- Print each number on a separate line

🧪 Test Cases:
Input: 3 → Output: 3 2 1
Input: 1 → Output: 1

--------------------------------------------------
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int ReadNumber() {
    int num;

    cout << "Enter A Number: \n";
    cin >> num;
    cout << "\n";
    return num;
}

void PrintNumberInDescendingOrder(int num) {
    for (int i = num; i > 0; i--) {
        cout << i << endl;
    }
}
int main()
{
    PrintNumberInDescendingOrder(ReadNumber());
    return 0;
}

