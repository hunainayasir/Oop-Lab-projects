#include <iostream>
using namespace std;

// Base Class
class Institution {
protected:
    string instName;
    string location;

public:
    // Constructor of Institution
    Institution(string name, string loc) {
        instName = name;
        location = loc;
    }

    // Method to display Institution data
    void displayInstitution() {
        cout << "Institution Name: " << instName << endl;
        cout << "Location: " << location << endl;
    }
};

// Derived Class 1 (inherits Institution)
class Department : public Institution {
protected:
    string deptName;
    string hod;

public:
    // Constructor of Department
    Department(string name, string loc, string dName, string h)
        : Institution(name, loc) {   // Calling base class constructor
        deptName = dName;
        hod = h;
    }

    // Method to display Department data
    void displayDepartment() {
        cout << "Department Name: " << deptName << endl;
        cout << "Head of Department: " << hod << endl;
    }
};

// Derived Class 2 (inherits Department)
class Faculty : public Department {
private:
    string facultyName;
    string subject;
    string designation;

public:
    // Constructor of Faculty
    Faculty(string name, string loc, string dName, string h,
            string fName, string sub, string des)
        : Department(name, loc, dName, h) {  // Calling parent constructor
        facultyName = fName;
        subject = sub;
        designation = des;
    }

    // Method to display Faculty data
    void displayFaculty() {
        cout << "Faculty Name: " << facultyName << endl;
        cout << "Subject Specialization: " << subject << endl;
        cout << "Designation: " << designation << endl;
    }
};

// Main function
int main() {

    // Creating object of Faculty class (multilevel inheritance)
    Faculty f1("Foundation University", "Islamabad",
               "Computer Science", "Mr. Ahmed",
               "Hunaina Yasir", "Artificial Intelligence", "Lecturer");

    // Display complete details
    f1.displayInstitution();
    f1.displayDepartment();
    f1.displayFaculty();

    return 0;
}

