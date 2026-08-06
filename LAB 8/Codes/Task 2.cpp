#include <iostream>
#include <string>
using namespace std;

class School {
public:
    string schoolName;
    void getSchool() {
        cout << "Enter School Name: ";
        cin >> schoolName;
    }
};

class Teacher : virtual public School {
public:
    string subject;
    void getTeacher() {
        cout << "Enter Subject: ";
        cin >> subject;
    }
};

class Student : virtual public School {
public:
    string grade;
    void getStudent() {
        cout << "Enter Grade: ";
        cin >> grade;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void show() {
        cout << "\n--- TA Info ---" << endl;
        cout << "School: " << schoolName << endl;
        cout << "Subject: " << subject << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.getSchool();
    ta.getTeacher();
    ta.getStudent();
    ta.show();
    return 0;
}
