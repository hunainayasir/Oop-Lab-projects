#include <iostream>
using namespace std;

class Student {
public:
    int RollNo;
    string Name;
    float Marks;

    Student() {
        RollNo = 0;
        Name = "";
        Marks = 0;
    }

    Student(int r, string n, float m) {
        RollNo = r;
        Name = n;
        Marks = m;
    }

    void display() {
        cout << "RollNo: " << RollNo << endl;
        cout << "Name: " << Name << endl;
        cout << "Marks: " << Marks << endl;
    }
};

int main() {
    Student s1;
    Student s2(1, "Ali", 85.5);

    s1.display();
    s2.display();

    return 0;
}
