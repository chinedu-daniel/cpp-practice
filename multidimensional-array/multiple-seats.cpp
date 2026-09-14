#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	int row;
	int column;
	int numberOfSeats;

	int classroom[3][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};

	cout << "How many seats do you want to occupy? ";
	cin >> numberOfSeats;

	for (int i = 0; i < numberOfSeats; i++) {
		int row;
		int column;

		cout << "Enter row: ";
		cin >> row;

		cout << "Enter column: ";
		cin >> column;

		classroom[row - 1][column - 1] = 1;
	}


	for (int row = 0; row < 3; row++) {
		for (int column = 0; column < 4; column ++) {
			cout << classroom[row][column] << " ";
		}

		cout << endl;
	}




	return 0;
}
