#include <iostream>

int main() {
	int age = 25;
	bool isStudent = true;

	std::cout << ((age >= 18) && (age <= 30)) << std::endl;

	std::cout << ((age < 18) || (age > 20)) << std::endl;

	std::cout << (!isStudent) << std::endl;

	return 0;
}
