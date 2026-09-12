#include <iostream>
int number1;
int number2;


int add(int number1, int number2);
int sub(int number1, int number2);
int multiply(int number1, int number2);
double divide(int number1, int number2);

int main() {
	std::cout << "Enter first number: ";
	std::cin >> number1;

	std::cout << "Enter second number: ";
	std::cin >> number2;

	int addition = add(number1, number2);
	std::cout << "Addition: " << addition << std::endl;

	int subtract = sub(number1, number2);
	std::cout << "Subtraction: " << subtract << std::endl;

	int product = multiply(number1, number2);
	std::cout << "Multiplication: " << product << std::endl;

	double division = divide(number1, number2);
	std::cout << "Division: " << division << std::endl;

	return 0;
}

int add(int number1, int number2) {
	return number1 + number2;
}

int sub(int number1, int number2) {
	return number1 - number2;
}

int multiply(int number1, int number2) {
	return number1 * number2;
}

double divide(int number1, int number2) {
	return static_cast<double>(number1) / number2;
}
