#include <iostream>

int main() {
	int number;

	std::cout << "Enter a number: " ;
	std::cin >> number;

	for (int i = 1; i <= number; i++) {
		std::cout << i << std::endl;
	}


	return 0;
}
