#include <iostream>
#include <cstring>

int main() {
	using std::cout;
	using std::endl;
	using std::strlen;
	using std::cin;

	char username[50];

	cout << "Enter username: ";
	cin >> username;

	cout << strlen(username) << endl;

	for (int i = 0; username[i] != '\0'; i++) {
		cout << username[i];
	}

	cout << endl;

	if (strlen(username) >= 5) {
		cout << "Username is valid" << endl;
	} else {
		cout << "Username is too short" << endl;
	}

	strcmp(username, "Chinedu");

	if(strcmp(username, "Chinedu") == 0) {
		cout << "Username matches" << endl;
	} else {
		cout << "Username does not match" << endl;
	}

	return 0;
}
