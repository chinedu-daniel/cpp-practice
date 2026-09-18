#include <iostream>
#include <string>

int main() {
    using std::string;
    using std::cout;
    using std::endl;

    struct Student {
        string name;
        int age;
        int score;
        char grade;
    };

    Student student1;
    Student student2;

    student1.name = "Chinedu";
    student1.age = 25;
    student1.score = 86;
    student1.grade = 'B';



    student2.name = "Emeka";
    student2.age = 20;
    student2.score = 91;
    student2.grade = 'A';

    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.score << endl;
    cout << student1.grade << endl;



    cout << student2.name << endl;
    cout << student2.age << endl;
    cout << student2.score << endl;
    cout << student2.grade << endl;


    return 0;
}