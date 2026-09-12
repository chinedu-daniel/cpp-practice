#include <iostream>
#include <string>

int main() {
	std::string name = "Chinedu";
	int age = 25;
	float height = 1.75;
	char grade = 'A';
	bool isStudent = true;

	std::cout << "===== Student =====" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Height: " << height << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	std::cout << "isStudent: " << isStudent << std::endl;
	std::cout << "Age next year: " << age + 1 << std::endl;

	std::cout << "=======================" << std::endl;

	return 0;
}
