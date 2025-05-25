#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadTriangleInputs(float& A, float& B, float& C) {
    cout << "Enter Triangle Input Number 1 \n";
    cin >> A;

    cout << "Enter Triangle Input Number 2: \n";
    cin >> B;

    cout << "Enter Triangle Input Number 3: \n";
    cin >> C;
}

float CircleAreaAroundArbitraryTriangle(float A, float B, float C) {
    const float PI = 3.141592653589793238;

    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    float Area = PI * pow(T,2);

    return Area;
}

void PrintCircleArea(float Area) {
    cout << "\n Area = " << Area << endl;
}
int main()
{
    float A, B, C;
    ReadTriangleInputs(A, B, C);
    PrintCircleArea(CircleAreaAroundArbitraryTriangle(A, B, C));
    
    return 0;
}

