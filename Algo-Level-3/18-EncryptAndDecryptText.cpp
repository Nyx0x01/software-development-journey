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

string EncryptText(string txt,short key) {
	string encrypt = "";
	for (int i = 0; i <= txt.length(); i++) {
		encrypt += txt[i] + key;
	}

	return encrypt;
}

string DecryptText(string EncryptedText, short key) {
	string decrypt = "";
	for (int i = 0; i <= EncryptedText.length()-1; i++) {
		decrypt += EncryptedText[i] - key;
	}
	return decrypt;
}

void PrintResults(string OriginalText, short key) {
	string EncryptedText, DecryptedText;
	EncryptedText = EncryptText(OriginalText, key);
	DecryptedText = DecryptText(EncryptedText, key);
	cout << "Text Before Encryption: " << OriginalText << endl;
	cout << "Text After Encryption: " << EncryptedText << endl;
	cout << "Text After Dencryption: " << DecryptedText << endl;
}
int main()
{
	const short key = 2;
	PrintResults(ReadText(),key);
	return 0;
}
