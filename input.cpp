#include <iostream>
#include <string>

int main() {
	int age;
	std::string name;

	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cin.ignore();

	std::cout << "Enter full name: ";
	std::getline(std::cin, name);

	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;

	return 0;
}
