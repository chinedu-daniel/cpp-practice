#include <iostream>

int main() {
	using std::cout;
	using std::endl;
	using std::cin;

	int row;
	int column;

	int classroom[3][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};

	cout << "Enter row: ";
	cin >> row;

	cout << "Enter column: ";
	cin >> column;

	classroom[row][column] = 1;

	for (int row = 0; row < 3; row++) {
		for (int column = 0; column < 4; column++) {
			cout << classroom[row][column] << " ";
		}
		cout << endl;

	}

	return 0;
}
