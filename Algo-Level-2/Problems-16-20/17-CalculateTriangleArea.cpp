#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadNumbers(float &A, float &B) {
	cout << "Enter first number: \n";
	cin >> A;

	cout << "Enter second number: \n";
	cin >> B;
}

float CalculateTriangleArea(float base, float height) {
	float Area = (base / 2) * height;

	return Area;
}

void PrintTriangleArea(float Area) {
	cout << "Area of your triangle = " << Area << endl;
}
int main()
{
	float base, height;
	ReadNumbers(base, height);
	PrintTriangleArea(CalculateTriangleArea(base, height));
	return 0;
}



