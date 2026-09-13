#include <iostream>
#include "calculator.h"

int main() {
	int choice;
	using std::cout;
	using std::cin;
	using std::endl;


	cout << "1. Add" << endl;

	cout << "2. Subtract" << endl;

	cout << "3. Multiply" << endl;

	cout << "4. Divide" << endl;

	cout << "5. Exit" << endl;


	cout << "Choose: ";
	cin >> choice;

	if (choice == 1) {
		int a;
		int b;

		cout << "Enter first number: ";
		cin >> a;

		cout << "Enter second number: ";
		cin >> b;

		cout << "Addition: " << calculator::add(a, b) << endl;
	} else if (choice == 2) {
		int a;
		int b;

		cout << "Enter first number: ";
                cin >> a;

                cout << "Enter second number: ";
                cin >> b;

                cout << "Subtraction: " << anotherCalculator::add(a, b) << endl;
	} else if (choice == 3) {
                int a;
                int b;

                cout << "Enter first number: ";
                cin >> a;

                cout << "Enter second number: ";
                cin >> b;

                cout << "Multiplication: " << thirdCalculator::add(a, b) << endl;
        } else if (choice == 4) {
                int a;
                int b;

                cout << "Enter first number: ";
                cin >> a;

                cout << "Enter second number: ";
                cin >> b;

                cout << "Division: " << fourthCalculator::add(a, b) << endl;
        } else if (choice == 5) {
		cout << "Goodbye" << endl;
	} else {
		cout << "Invalid Choice." << endl;
	}

	return 0;
}
