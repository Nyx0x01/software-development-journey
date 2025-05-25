#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadRadius() {
	float radius;
	cout << "Enter the radius of your circle: \n";
	cin >> radius;
	return radius;
}

float CalculateCircleArea(float radius) {
	const float PI = 3.141592653589793238;
	float Area = PI * pow(radius, 2);
	return Area;
}

void PrintCircleArea(float Area) {
	cout << "Area of your circle = " << Area << endl;
}
int main()
{
	PrintCircleArea(CalculateCircleArea(ReadRadius()));
	return 0;
}

