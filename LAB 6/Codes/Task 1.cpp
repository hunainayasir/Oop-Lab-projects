#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
    }

    ~Student() {
        cout << "Destructor called: Student object for " << name << " is being destroyed." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNumber << ", Marks: " << marks << endl;
    }
};

int main() {
    string n;
    int r;
    float m;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter details for Student " << i << " (Name, RollNo, Marks): ";
        cin >> n >> r >> m;
        Student s(n, r, m);
        s.display();
    }

    return 0;
}
