#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stCalculatorInputs {
	float Num1, Num2;
	char Operation;
};

enum enOpType{Plus = 1, Minus =2, Multiply = 3, Divide =4};

stCalculatorInputs ReadData() {
	stCalculatorInputs info;

	cout << "Enter first Number: \n";
	cin >> info.Num1;

	cout << "Enter second Number: \n";
	cin >> info.Num2;

	cout << "Enter operation type (+,-,*,/): \n";
	cin >> info.Operation;

	return info;
}

enOpType CheckOperationType(stCalculatorInputs info) {
  
	switch (info.Operation) {
	case '+':
		return enOpType::Plus;
		break;
	case '-':
		return enOpType::Minus;
		break;
	case '*':
		return enOpType::Multiply;
		break;
	case '/':
		return enOpType::Divide;
		break;
	default:
		return enOpType::Plus;
		break;
	}

}

float Calculator(stCalculatorInputs info) {
	enOpType op;
	op = CheckOperationType(info);
	if (op== enOpType::Plus) {
		return info.Num1 + info.Num2;
	}
	else if (op == enOpType::Minus) {
		return info.Num1 - info.Num2;
	}
	else if (op == enOpType::Multiply) {
		return info.Num1 * info.Num2;
	}
	else if (op == enOpType::Divide) {
			return info.Num1 / info.Num2;	
	}
	else {
		return 0;
	}
}

void PrintCalculatorResults(float Calculator, stCalculatorInputs info) {
	cout << info.Num1 << info.Operation << info.Num2 << " = " << Calculator <<endl;
}
int main()
{
	stCalculatorInputs info = ReadData();
	PrintCalculatorResults(Calculator(info), info);
	return 0;
}


