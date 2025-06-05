#include <iostream>

using namespace std;


void PrintHeader() {
	cout << "\n\n\t\t\tMultiplication Table From 1 To 10 \n\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++) {
		cout << i <<"\t";
	}
	cout << "\n--------------------------------------------------------------------------------------\n";
}

string ColumnSepartor(int i) {
	if (i < 10) {
		return "   |";
	}
	else {
		return "  |";
	}
}

void PrintMultiplicationTable() {
	PrintHeader();

	for (int i = 1; i <= 10; i++) {

		cout << " " << i << ColumnSepartor(i) << "\t";

		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}
}


int main()
{

	PrintMultiplicationTable();
	return 0;
}

