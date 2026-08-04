#include <iostream>
#include <string>
using namespace std;

class MedicalProfessional {
protected:
    string specialization;

public:
    MedicalProfessional(string spec) {
        specialization = spec;
    }
};

class Employee {
protected:
    int employeeID;

public:
    Employee(int id) {
        employeeID = id;
    }
};

class Doctor : public MedicalProfessional, public Employee {
private:
    int experience;

public:
    Doctor(string spec, int id, int exp) : MedicalProfessional(spec)
	, Employee(id) {
        experience = exp;
    }

    void showDoctor() {
        cout << "Specialization: " << specialization << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Experience: " << experience << " years" << endl;
    }
};

int main() {
    Doctor d1("Cardiologist", 9002, 15);
    d1.showDoctor();

    return 0;
}
