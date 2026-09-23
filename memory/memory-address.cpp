#include <iostream>

int main() {
	using std::cout;
	using std::endl;


	int age = 25;
	int score = 85;
	int year = 2026;

	cout << "Age: " << age << endl;
	cout << "Age address: " << &age << endl;

	cout << "Score" << score << endl;
	cout << "Score address: " << &score << endl;

	cout << "Year" << year << endl;
	cout << "Year address: " << &year << endl;

	return 0;
}
