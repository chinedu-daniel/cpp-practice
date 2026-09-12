#include <iostream>

int main() {
	int age = 16;

	if (age >= 18) {
		std::cout << "You are an adult." << std::endl;

		if (age >= 21) {
			std::cout << "You can access this section." << std::endl;
		}
	}

	return 0;
}
