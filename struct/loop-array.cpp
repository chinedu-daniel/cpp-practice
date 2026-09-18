#include <iostream>
#include <string>

int main() {
	using std::cout;
	using std::endl;
	using std::string;

	struct Student {
		string name;
		int age;
		int score;
		char grade;
	};

	Student students[3];

	students[0].name = "Chinedu";
	students[0].age = 25;
	students[0].score = 85;
	students[0].grade = 'B';

	students[1].name = "Emeka";
	students[1].age = 20;
	students[1].score = 94;
	students[1].grade = 'A';

	students[2].name = "Victor";
	students[2].age = 28;
	students[2].score = 75;
	students[2].grade = 'C';
	

	for (int i = 0; i < 3; i++) {
		cout << students[i].name << endl;
		cout << students[i].age << endl;
		cout << students[i].score << endl;
		cout << students[i].grade << endl;
		cout << endl;
	}


	return 0;
}
