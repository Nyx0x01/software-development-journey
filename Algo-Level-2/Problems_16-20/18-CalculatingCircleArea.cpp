#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadNumbers(float &num) {
	cout << "Enter a number: \n";
	cin >> num;
}

float CalculateCircleArea(float radius, float PI) {
	float Area = PI * pow(radius, 2);
	return Area;
}

void PrintCircleArea(float Area) {
	cout << "Area of your circle = " << Area << endl;
}
int main()
{
	float radius;
	const float PI = 3.14;
	ReadNumbers(radius);
	PrintCircleArea(CalculateCircleArea(radius, PI));
	return 0;
}



