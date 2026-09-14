#include <iostream>
#include <string>

int main() {
	using std::cout;
	using std::string;
	using std::cin;
	using std::getline;
	using std::endl;

	string text;
	int words = 0;
	bool inWord = false;

	cout << "Enter text: ";
	getline(cin, text);

	cout << "You entered: " << text << endl;

	cout << "Characters: " << text.length() << endl;

	for (char character : text) {
		if (character != ' ' && !inWord) {
			words++;
			inWord = true;
		}

		if (character == ' ') {
			inWord = false;
		}
	}

	cout << "Words: " << words << endl;

	return 0;
}
