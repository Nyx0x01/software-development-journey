#include <iostream>

using namespace std;

void ReadNumbers(float& num1, float& num2) {
	cout << "Enter first number: \n";
	cin >> num1;
	cout << "Enter second number: \n";
	cin >> num2;
}

float CalculateArea(float height, float width) {
	
	return height * width;
}

void PrintArea(float Area) {
	cout << "Area of your rectangle = " << Area << endl;
}
int main()
{

	float height, width;
	ReadNumbers(height, width);
	PrintArea(CalculateArea(height, width));

	return 0;
}
