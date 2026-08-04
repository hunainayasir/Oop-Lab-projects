#include <iostream>
#include <string>
using namespace std;

class Teacher {
protected:
    string subject;

public:
    Teacher(string sub) {
        subject = sub;
    }
};

class Researcher {
protected:
    string researchField;

public:
    Researcher(string field) {
        researchField = field;
    }
};

class Professor : public Teacher, public Researcher {
private:
    int experience;

public:
    Professor(string sub, string field, 
	int exp) : Teacher(sub), Researcher(field) {
        experience = exp;
    }

    void displayProfessor() {
        cout << "Subject: " << subject << endl;
        cout << "Research Field: " << researchField << endl;
        cout << "Years of Experience: " << experience << endl;
    }
};

int main() {
    Professor p1("Computer Science", "Artificial Intelligence", 12);
    p1.displayProfessor();

    return 0;
}
