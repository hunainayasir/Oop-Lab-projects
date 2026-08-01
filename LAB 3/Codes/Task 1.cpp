#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); // Clear the buffer so getline works
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
    
    void setData(int roll, string n, float m) {   // Function to set data via parameters
        rollNo = roll;
        name = n;
        marks = m;
    }

    float getMarks() {
        return marks;
    }

    void showData() {
        cout << "\nStudent Details:" << endl;
        cout << "Roll No: " << rollNo << "\nName: " 
		<< name << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1;

    // user entering data
    s1.getData();
    s1.showData();
    s1.setData(101, "Alex", 95.5); // Overwriting the data
    
    cout << "Updated Marks: " << s1.getMarks() << endl;

    return 0;
}
