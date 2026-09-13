#include <iostream>
#include <string>

int main() {
	using std::cout;
	using std::string;
	using std::endl;
	using std::cin;

	string firstName;
	string lastName;
	string username;

	cout << "Enter first name: ";
	cin >> firstName;

	cout << "Enter last name: ";
	cin >> lastName;

	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;

	firstName.append(" ");
        firstName.append(lastName);

	cout << "Full Name: " << firstName << endl;

	cout << firstName.length() << endl;

	cout << firstName.substr(0, 7) << endl;

	cout << firstName.empty() << endl;

	cout << endl;

	cout << "Enter username: ";
	cin >> username;

	if (username.empty()) {
		cout << "Username is empty" << endl;
	} else {
		cout << "Username: " << username << endl;
		cout << "Username length: " << username.length() << endl;
	}




	return 0;
}
