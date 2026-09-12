#include <iostream>
#include <string>

int main() {
	std::string title = "Student Information";
	std::string name = "Precious";
	int age = 12;
	float height = 40.2;
	char grade = 'A';
	bool isStudent = true;

	int nextYear = age + 1;

	std::cout << title << std::endl;

	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Age next year: " nextYear << std::endl;
	std::cout << "Height: " << height << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	std::cout << "Is Student: " << isStudent << std::endl;

	return 0;
}
