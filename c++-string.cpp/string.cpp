#include <iostream>
#include <string>

int main() {
	using std::cout;
	using std::string;
	using std::endl;

	string name = "Chinedu";

	cout << name << endl;

	cout << name.length() << endl;

	cout << name.empty() << endl;

	cout << name.append(" Daniel") << endl;

	cout << name.substr(0, 7) << endl;

	return 0;
}
