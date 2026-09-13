#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	int scores[5];

	for (int i = 0; i < 5; i++) {
		cout << "Enter score " << i + 1 << ": ";
		cin >> scores[i];
	}

	scores[2] = 78;

	cout << "Student Scores:" << endl;

	for (int i = 0; i < 5; i++) {
		cout << scores[i] << endl;
	}

	return 0;
}
