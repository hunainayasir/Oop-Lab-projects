#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    double salary;

public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void setSalary(double newSalary) {
        salary = newSalary; 
    }

    double getSalary() {
        return salary;
    }

    void showData() {
        cout << "\nID: " << empID << "\nName: " 
		<< name << "\nSalary: $" << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.getData();
    emp.showData();

    // Giving the employee a raise
    emp.setSalary(5000.0);
    
    cout << "New Salary: $" << emp.getSalary() << endl;

    return 0;
}
