#include <iostream>

int main() {
	using std::cout;
	using std::endl;

	int classroom[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << classroom[0][0] << endl;
	cout << classroom[0][1] << endl;
	cout << classroom[0][2] << endl;

	cout << classroom[1][0] << endl;
	cout << classroom[1][1] << endl;
	cout << classroom[1][2] << endl;


	return 0;
}
