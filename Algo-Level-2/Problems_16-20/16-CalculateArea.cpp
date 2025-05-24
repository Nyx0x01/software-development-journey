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

float CalculateRectangleArea(float A, float B) {
	return A * (sqrt(pow(B, 2) - pow(A, 2)));
}

void PrintArea(float Area) {
	cout << "Your rectangle's area = " << Area << endl;
}
int main()
{
	float width, diagonal;
	ReadNumbers(width, diagonal);
	PrintArea(CalculateRectangleArea(width, diagonal));
	return 0;
}



