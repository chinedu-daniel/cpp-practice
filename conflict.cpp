#include <iostream>

using std::cout;

namespace calculator {
	int add(int a, int b) {
		return a + b;
	}
}

namespace anotherCalculator {
	int add(int a, int b) {
		return a * b;
	}
}

int main() {
	int result = calculator::add(10, 5);

	cout << result << std::endl;

	int product = anotherCalculator::add(10, 5);

	cout << product << std::endl;


	return 0;
}
