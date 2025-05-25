#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadDiameter() {
	float diameter;

	cout << "Enter th diameter of your circle: \n";
	cin >> diameter;

	return diameter;
}

float CalculateCircleArea(float diameter) {
	const float PI = 3.141592653589793238;
	
	float Area = (PI * pow(diameter, 2)) / 4;

	return Area;
}

void PrintArea(float Area) {
	cout << "\n Area = " << Area << endl;
}
int main()
{
	PrintArea(CalculateCircleArea(ReadDiameter()));
	return 0;
}



