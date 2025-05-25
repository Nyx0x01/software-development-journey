/*
--------------------------------------------------
🧠 Problem: Summ Odd Numbers from 1 to N
📁 Level: 02 - Algorithms
🎯 Topic: Loops / Basic I/O / Enums /Conditional Statements
👩‍💻 Author: Nyx0x01
--------------------------------------------------

📌 Description:
Write a program to sum odd numbers from 1 to N 

🧮 Input:
A single integer N (1 ≤ N ≤ 10^6)

📤 Output:
Print sum of odd numbers

🔁 Example:
Input: 10
Output: 25

🧩 Approach:
- Use `enum` to classify odd/even
- Read number from user
- Use function to check if a number is odd
- Loop from 1 to N and accumulate sum of odd numbers
- Print the result

🧪 Test Cases:
Input: 20 → Output: 100
Input: 4 → Output: 4

--------------------------------------------------
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << i << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};

int ReadNumber() {
    int num;

    cout << "Enter a number: \n";
    cin >> num;

    return num;
}

enOddOrEven CheckNumberEvenOdd(int num) {
    if (num % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}

int SumOddNumbers(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        if (CheckNumberEvenOdd(i) == enOddOrEven::Odd) {
            sum += i;
        }
    }
    return sum;
}

void PrintSumOfOddNumbers(int sum,int num) {
    cout << "Sum of odd numbers between 1 and " << num << " = " << sum << endl;
}
int main()
{
    int Number = ReadNumber();
    PrintSumOfOddNumbers(SumOddNumbers(Number), Number);

    return 0;
}

