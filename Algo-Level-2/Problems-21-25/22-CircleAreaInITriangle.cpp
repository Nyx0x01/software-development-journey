#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadNumbers(float &A, float &B) {
    cout << "Enter Isosceles Triangle Sides: \n";
    cin >> A;

    cout << "Enter Isosceles Triangle Base: \n";
    cin >> B;
}

float CircleAreaInscribedInIsoscelesTriangle(float A, float B) {
    const float PI = 3.141592653589793238;

    float P = (2 * A - B) / (2 * A + B);
    
    float Area = PI * (pow(B, 2) / 4) * P;

    return Area;
}

void PrintCircleArea(float Area) {
    cout << "\n Area = " << Area << endl;
}

int main()
{
    float A, B;
    ReadNumbers(A, B);
    PrintCircleArea(CircleAreaInscribedInIsoscelesTriangle(A, B));
    return 0;
}
