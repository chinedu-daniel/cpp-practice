#include <iostream>

int main() {
	int score;

	std::cout << "Enter student score: ";
	std::cin >> score;

	if(score < 0 || score > 100) {
		std::cout << "Invalid score" << std::endl;
	} else if (score >= 90) {
		std::cout << "Grade: A" << std::endl;
		std::cout << "Status: Excellent" << std::endl;
	} else if (score >= 80) {
		std::cout << "Grade: B" << std::endl;
		std::cout << "Status: Good" << std::endl;
	} else if (score >= 70) {
		std::cout << "Grade: C" << std::endl;
		std::cout << "Status: Pass" << std::endl;
	} else if (score >= 60) {
		std::cout << "Grade: D" << std::endl;
		std::cout << "Status: let my people go" << std::endl;
	} else {
		std::cout << "Grade: F" << std::endl;
		std::cout << "Status: Fail" << std::endl;
	}

	return 0;
}
