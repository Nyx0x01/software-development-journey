#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadSquareSide() {
	float A;

	cout << "Enter the side of your sqaure: \n";
	cin >> A;
	
	return A;
}

float AreaOfCircleInscribedInSquare(float A) {
	const float PI = 3.141592653589793238;
	float Area = (pow(A, 2) * PI) / 4;
	return Area;
}

void PrintArea(float Area) {
	cout << "\n Area = " << Area << endl;
}
int main()
{
	PrintArea(AreaOfCircleInscribedInSquare(ReadSquareSide()));
	return 0;
}
