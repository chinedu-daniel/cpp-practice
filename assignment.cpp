#include <iostream>

int main() {
	int number = 10;

	std::cout << "Initail: " << number << std::endl;

	number += 5;
	std::cout << "After +5: " << number << std::endl;

	number -= 3;
	std::cout << "After -=3: "  << number << std::endl;

	number *= 2;
	std::cout << "After *=2: " << number << std::endl;

	number /= 4;
	std::cout << "After /=4: " << number << std::endl;

	return 0;
}
