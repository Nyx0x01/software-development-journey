#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadCircumference() {
    float L;

    cout << "Enter the circumference: \n";
    cin >> L;

    return L;
}

float CircleAreaUsingCircumference(float circumference) {
    const float PI = 3.141592653589793238;

    float Area = pow(circumference, 2) / (4 * PI);

    return Area;
}

void PrintCircleArea(float Area) {
    cout << "\n Area Of Your Circle = " << Area << endl;
}
int main()
{
    PrintCircleArea(CircleAreaUsingCircumference(ReadCircumference()));
    return 0;
}

