#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string species;
    string habitat;

public:
    // Constructor of Animal
    Animal(string sp, string hab) {
        species = sp;
        habitat = hab;
    }

    // Display function
    void displayAnimal() {
        cout << "Species: " << species << endl;
        cout << "Habitat: " << habitat << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
protected:
    int gestationPeriod;
    bool isDomesticated;

public:
    // Constructor of Mammal (calls Animal constructor)
    Mammal(string sp, string hab, int gp, bool dom)
        : Animal(sp, hab) {   // calling base class constructor
        gestationPeriod = gp;
        isDomesticated = dom;
    }

    // Display function
    void displayMammal() {
        cout << "Gestation Period: " << gestationPeriod << " days" << endl;
        cout << "Domesticated: " << (isDomesticated ? "Yes" : "No") << endl;
    }
};

// Derived class from Mammal (Multilevel Inheritance)
class Dog : public Mammal {
private:
    string breed;
    int age;

public:
    // Constructor of Dog (calls Mammal constructor)
    Dog(string sp, string hab, int gp, bool dom, string br, int ag)
        : Mammal(sp, hab, gp, dom) {
        breed = br;
        age = ag;
    }

    // Display all information
    void displayDog() {
        displayAnimal();   // from Animal
        displayMammal();   // from Mammal
        cout << "Breed: " << breed << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

// Main function
int main() {
    // Creating object of Dog
    Dog d1("Canine", "Domestic/Home", 63, true, "Labrador", 3);

    // Display data
    d1.displayDog();

    return 0;
}
