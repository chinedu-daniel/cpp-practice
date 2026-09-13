#include <iostream>

int main() {
	using std::cout;
	using std::endl;

	int scores[5] = {78, 85, 92, 67, 72};

	scores[2] = 95;

	cout << scores[0] << endl;
	cout << scores[1] << endl;
	cout << scores[2] << endl;
	cout << scores[3] << endl;
	cout << scores[4] << endl;

	return 0;
}
