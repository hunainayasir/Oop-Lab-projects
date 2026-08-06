#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    void getPerson() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : virtual public Person {
public:
    int rollNo;
    void getStudent() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

class Employee : virtual public Person {
public:
    int employeeId;
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> employeeId;
    }
};

class StudentIntern : public Student, public Employee {
public:
    void display() {
        cout << "\n--- Intern Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Employee ID: " << employeeId << endl;n
    }
};

int main() {
    StudentIntern si;
    si.getPerson();
    si.getStudent();
    si.getEmployee();
    si.display();
    return 0;
}
