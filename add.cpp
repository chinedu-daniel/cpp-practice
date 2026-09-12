#include <iostream>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main() {
	int addition = add(10, 5);
	std::cout << "Addition: " << addition <<std::endl;

	int difference = subtract(10, 5);
	std::cout << "Subtraction: " << difference << std::endl;

	int product = multiply(10, 5);
	std::cout << "Multiplication: " << product << std::endl;

	double quotient = divide(10, 5);
	std::cout << "Division: " << quotient << std::endl;

	return 0;
}

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

double divide(int a, int b) {
	return static_cast<double>(a) / b;
}

