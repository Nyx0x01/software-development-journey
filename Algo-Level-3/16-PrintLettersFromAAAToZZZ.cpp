#include <iostream>
#include <cmath>
#include <string>

using namespace std;
void PrintLettersAAAToZZZ() {
	string word = "";
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				word.append(1, char(i));
				word.append(1, char(j));
				word.append(1, char(k));
				cout << word << endl;
				word = "";
			}
			
		}
	}
	
}

int main()
{
	PrintLettersAAAToZZZ();
	return 0;
}
