#include <iostream>

int main() {
	std::string name;
	int age;
	int numberOfSubjects;
	int score;
	int total = 0;
	double average;
	char grade;
	std::string status;

	std::cout << "Enter Student Name: ";
	std::cin >> name;

	std::cout << "Enter Student Age: ";
	std::cin >> age;

	std::cout << "Enter Number of Subjects: ";
	std::cin >> numberOfSubjects;

	for (int i = 1; i <= numberOfSubjects; i++) {
		std::cout << "Enter Score for Subject " << i << ": ";
		std::cin >> score;
		total += score;
	}

	average = static_cast<double>(total) / numberOfSubjects;

	if (average < 0 || average > 100) {
		std::cout << "Not valid" << std::endl;
	} else if (average >= 90) {
		grade = 'A';
		status = "Excellent";
	} else if (average >= 80) {
		grade = 'B';
		status = "Good";
	} else if (average >= 70) {
		grade = 'C';
		status = "Pass";
	} else if (average >= 60) {
		grade = 'D';
		status = "Let my people go";
	} else {
		grade = 'F';
		status = "Fail";
	}

	std::cout << "===== Student Report =====" << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Number of Subjects: " << numberOfSubjects << std::endl;
	std::cout << "Total Score: " << total << std::endl;
	std::cout << "Average: " << average << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	std::cout << "Status: " << status << std::endl;


	return 0;
}
