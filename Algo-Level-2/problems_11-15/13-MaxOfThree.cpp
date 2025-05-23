
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int ReadNumber() {
	int num;

	cout << "Enter a number: \n";
	cin >> num;

	return num;
}

int MaxOf3Numbers(int num1, int num2, int num3) {
	
	if (num1 > num2) {
		if (num1 > num3) 
			return num1;
		
		else 
			return num3;
		
	}
	else {
		if (num2 > num3) 
		return num2;
	
	else 
		return num3;
}

}

void PrintMax(int max) {
	cout << "Max of 3 entered numbers is: " << max << endl;
}
int main()
{
  // Experminting with different ways to read inputs
	int num1, num2, num3;
	num1 = ReadNumber();
	num2 = ReadNumber();
	num3 = ReadNumber();
	PrintMax(MaxOf3Numbers(num1, num2, num3));
	return 0;
}


