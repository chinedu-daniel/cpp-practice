#include <iostream>
#include <string>

int main() {
	using std::cout;
	using std::endl;
	using std::string;
	using std::size_t;

	string text = "I am learning C++";

	string language = "C++";

	if (text.find("C++") != string::npos) {
		cout << "C++ was found" << endl;
	}

	if (language == "C++") {
		cout << "They are the same" << endl;
	}

	text.replace(5, 8, "studying");

	cout << text << endl;

	size_t position = text.find("C++");

	cout << "C++ starts at index: " << position << endl;

	string word = text.substr(5, 8);

	cout << "Extracted word: " << word << endl;

	return 0;
}
