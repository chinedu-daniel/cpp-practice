#include <iostream>

	void sayHello(std::string name);

	int main() {
		sayHello("Chinedu");

		return 0;
	}

	void sayHello(std::string name) {
		std::cout<< "Hello " << name << std::endl;
	}
