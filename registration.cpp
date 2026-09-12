#include <iostream>
#include <string>

int main() {
	std::string first_name;
	std::string last_name;
	int age;
	std::string email;
	std::string phone;

	std::cout << "Enter first name: ";
	std::cin >> first_name;

	std::cout << "Enter last name: ";
	std::cin >> last_name;

	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cout << "Enter your email: ";
	std::cin >> email;

	std::cout << "Enter your phone number: ";
	std::cin >> phone;



	std::cout << "============ STUDENT REGISTRATION =============="<< std::endl;


	std::cout << "First Name: " << first_name << std::endl;

	std::cout << "Last Name: " << last_name << std::endl;

	std::cout << "Age: " << age << std::endl;

	std::cout << "Email: " << email << std::endl;

	std::cout << "Phone: " << phone << std::endl;


	std::cout << "================================================="<< std::endl;

	return 0;
}
