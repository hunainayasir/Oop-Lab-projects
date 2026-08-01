#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    void showStudent() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Student Name: " << name << endl;
    }
};

class Graduate : public Student {
private:
    string degree;

public:
    Graduate(int r, string n, string d) : Student(r, n) {
        degree = d;
    }

    void showFullDetails() {
        showStudent();
        cout << "Degree Program: " << degree << endl;
    }
};

int main() {
    Graduate g1(505, "John Doe", "BS Computer Science");
    g1.showFullDetails();

    return 0;
}
