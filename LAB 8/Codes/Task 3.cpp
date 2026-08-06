#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string type;
    void show() {
        cout << "Vehicle Type: " << type << endl;
    }
};

class Car : public Vehicle {
public:
    void show() {
        type = "Car";
        cout << "This is a " << type << endl;
    }
};

class Bike : public Vehicle {
public:
    void show() {
        type = "Bike";
        cout << "This is a " << type << endl;
    }
};

class ElectricCar : public Car {
public:
    void show() {
        cout << "This is an Electric Car (Battery Powered)" << endl;
    }
};

class ElectricBike : public Bike {
public:
    void show() {
        cout << "This is an Electric Bike (Battery Powered)" << endl;
    }
};

int main() {
    ElectricCar ec;
    ElectricBike eb;
    ec.show();
    eb.show();
    return 0;
}
