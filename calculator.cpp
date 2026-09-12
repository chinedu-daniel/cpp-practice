#include <iostream>

int main() {
	int number1;
	int number2;

	int num;


	std::cout << "Enter the first number: ";
	std::cin >> number1;

	std::cout << "Enter the second number: ";
	std::cin >> number2;

	num = number1 + number2;
	std::cout << "Total: " << num << std::endl;

	std::cout << "Average: " << num / 2.0 << std::endl;

	std::cout << "Difference: " << num << std::endl;

	std::cout << "Product: " << num << std::endl;

	return 0;
}
