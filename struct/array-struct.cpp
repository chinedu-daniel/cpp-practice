#include <iostream>
#include <string>

int main() {
    using std::cout;
    using std::string;
    using std::endl;

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



    cout << students[0].name << endl;
    cout << students[0].age << endl;
    cout << students[0].score << endl;
    cout << students[0].grade << endl;

    cout << endl;

    cout << students[1].name << endl;
    cout << students[1].age << endl;
    cout << students[1].score << endl;
    cout << students[1].grade << endl;

    cout << endl;

    cout << students[2].name << endl;
    cout << students[2].age << endl;
    cout << students[2].score << endl;
    cout << students[2].grade << endl;






    return 0;
}