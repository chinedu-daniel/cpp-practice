#include <iostream>

int main() {
	using std::cout;
	using std::endl;

	int age = 25;
	int* ptr = &age;
	*ptr = 30;

	int score = 85;
	int* str = &score;
	*str = 90;

	cout << "Age: " << age << endl;
	cout << "Age address: " << &age << endl;
	cout << "Pointer: " << ptr << endl;
	cout << "Value through pointer: "<< *ptr << endl;
	cout << "Age after modification: " << age << endl;


	cout << "Score: " << score << endl;
	cout << "Score Address: " << &score << endl;
	cout << "Pointer: " << str << endl;
	cout << "Value through pointer: " << *str << endl;
	cout << "Score after modification: " << score << endl;


	return 0;
}
