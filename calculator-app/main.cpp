#include <iostream>
#include "calculator.h"

int main() {
	int result = add(10, 5);

	std::cout << "Addition: " << result << std::endl;

	int sub = subtract(10, 5);

	std::cout << "Subtraction: " << sub << std::endl;

	int product = multiply(10, 5);

	std::cout << "Multiplication: " << product << std::endl;

	int div = divide(10, 5);

	std::cout << "Division: " << div << std::endl;

	return 0;
}
