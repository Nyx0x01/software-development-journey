#include <iostream>
#include <cstdlib>
using namespace std;

int GenarateRandomNumber(int From, int To) {
	return (rand() % To) + From;
	
}

void PrintRandomNumbers() {
	for (int i = 1; i <= 3; i++) {
		cout << GenarateRandomNumber(1, 10) << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));

	PrintRandomNumbers();

	return 0;
}
