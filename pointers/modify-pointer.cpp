#include <iostream>

int main() {
	using std::cout;
	using std::endl;
	using std::cin;

	int age;
	int score;

	int* agePtr = &age;
	int* scorePtr = &score;

	cout << "Enter age: ";
	cin >> age;

	cout << "Enter score: ";
	cin >> score;

	*agePtr = 30;
	*scorePtr = 90;

	cout << "Age: " << age << endl;
	cout << "Age address: " << &age << endl;
	cout << "Variable to store age: " << agePtr << endl;
	cout << "Dereferencing age: " << *agePtr << endl;
	cout << "Age after modification: " << age << endl;


	cout << "Score: " << score << endl;
	cout << "Score address: " << &score << endl;
	cout << "Variable to store score: " << scorePtr << endl;
	cout << "Dereferencing score: " << *scorePtr << endl;
	cout << "Score after modification: " << score << endl;




	return 0;
}
