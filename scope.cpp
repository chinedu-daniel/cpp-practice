#include <iostream>

void testLifetime() {
	int number = 100;

	std::cout << number << std::endl;
}

void showAge() {
	int age = 30;

	std::cout << age << std::endl;
}

int main() {
	int age = 25;

	int days = 39;

	{
		int score = 90;

		std::cout << score << std::endl;
	}

	std::cout << age << std::endl;

	std::cout << days << std::endl;

	showAge();

	testLifetime();

	return 0;
}
