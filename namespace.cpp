#include <iostream>

namespace calculator {
	int add(int a, int b) {
		return a + b;
	}
}

int main() {
	int result = calculator::add(10, 5);

	std::cout << result << std::endl;

	return 0;
}
