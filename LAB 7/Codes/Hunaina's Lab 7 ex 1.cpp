#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor of Person
    Person() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class from Person
class Student : public Person {
protected:
    int rollNo;

public:
    // Constructor of Student (Constructor Chaining)
    Student() : Person() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudent() {
        displayPerson();  // calling base class function
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived Class from Student
class Result : public Student {
private:
    int marks1, marks2, marks3;
    int total;
    float average;

public:
    // Constructor of Result (Constructor Chaining)
    Result() : Student() {
        cout << "Enter Marks of 3 Subjects:\n";
        cin >> marks1 >> marks2 >> marks3;
    }

    // Function to calculate total and average
    void calculate() {
        total = marks1 + marks2 + marks3;
        average = total / 3.0;
    }

    void displayResult() {
        displayStudent(); // calling parent class function
        cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }
};

// Main Function
int main() {
    Result r;        // Object of Result class
    r.calculate();   // Calculate total and average
    r.displayResult(); // Display all data
    return 0;
}
