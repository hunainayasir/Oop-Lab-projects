#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;

public:
    Employee(int empId, string empName) {
        id = empId;
        name = empName;
    }

    void displayEmployee() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(int empId, string empName, 
	string dep) : Employee(empId, empName) {
        department = dep;
    }

    void displayAllDetails() {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m1(101, "Alice", "IT Operations");
    m1.displayAllDetails();
    
    return 0;
}
