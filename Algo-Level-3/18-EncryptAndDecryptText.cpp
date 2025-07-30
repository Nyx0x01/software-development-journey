#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string ReadText() {
	string txt;

	cout << "Enter your text: \n";
	cin.ignore(0, '\n');
	getline(cin, txt);

	return txt;
}

string EncryptText(string txt) {
	string encrypt = "";
	for (int i = 0; i <= txt.length(); i++) {
		encrypt += txt[i] + 2;
	}

	return encrypt;
}

string DecryptText(string EncryptedText) {
	string decrypt = "";
	for (int i = 0; i <= EncryptedText.length()-1; i++) {
		decrypt += EncryptedText[i] - 2;
	}
	return decrypt;
}

void PrintResults(string OriginalText) {
	string EncryptedText, DecryptedText;
	EncryptedText = EncryptText(OriginalText);
	DecryptedText = DecryptText(EncryptedText);
	cout << "Text Before Encryption: " << OriginalText << endl;
	cout << "Text After Encryption: " << EncryptedText << endl;
	cout << "Text After Dencryption: " << DecryptedText << endl;
}
int main()
{
	
	PrintResults(ReadText());

	return 0;
}
