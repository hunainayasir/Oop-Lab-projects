#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string brand;
    int year;

public:
    Vehicle(string b, int y) {
        brand = b;
        year = y;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    string fuelType;

public:
    Car(string b, int y, string fuel) : Vehicle(b, y) {
        fuelType = fuel;
    }

    void displayCarDetails() {
        displayVehicle();
        cout << "Fuel Type: " << fuelType << endl;
    }
};

int main() {
    Car myCar("Toyota", 2022, "Hybrid");
    myCar.displayCarDetails();

    return 0;
}
