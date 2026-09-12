#include <iostream>

int calculate(int a, int b);
double calculate(double a, double b);
int calculate(int a, int b, int c);

int main() {
	int result = calculate(10, 5);
	double multiply = calculate(10.5, 5.5);
	int number= calculate(10, 5, 2);

	std::cout << "Result: " << result << std::endl;

	std::cout << "Multiplication: " << multiply << std::endl;

	std::cout << "Three numbers: " << number << std::endl;

	return 0;
}

int calculate(int a, int b) {
	return a + b;
}

double calculate(double a, double b) {
	return a * b;
}

int calculate(int a, int b, int c) {
	return a + b + c;
}
