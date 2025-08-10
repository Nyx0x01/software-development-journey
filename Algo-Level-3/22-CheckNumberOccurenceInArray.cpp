#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string message) {
	int Number;

	do {
		cout << message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void ReadArrayElements(int &arrLength, int arr[100]) {
	cout << "Enter Array Elements: \n";
	for (int i = 0; i < arrLength; i++) { 
		arr[i] = ReadPositiveNumber("Element [" + to_string(i + 1) + "]:");
	}
}

int CheckElementOccurence(int &num, int arr[100]) {
	int count = 0;
	for (int i = 0; i < sizeof(arr); i++) {
		if (arr[i] == num) {
			count++;
		}
	}
	return count;
}

void PrintResults(int num , int arr[100]) {
	cout << "Original Array:";
	for (int i = 0; i < sizeof(arr); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << num << " is repeated " << CheckElementOccurence(num, arr) << " time(s).";
}
int main()
{
	int arr[100], num , arrLength;
	arrLength = ReadPositiveNumber("Enter array length:"));
  ReadArrayElements(arrLength,arr);
	num = ReadPositiveNumber("Enter number you want to check: ");
	PrintResults(num, arr);

	return 0;
}

