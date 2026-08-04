#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string type;

public:
    Vehicle(string t) {
        type = t;
    }
};

class Brand {
protected:
    string brandName;

public:
    Brand(string b) {
        brandName = b;
    }
};

class Car : public Vehicle, public Brand {
private:
    string modelName;

public:
    Car(string t, string b, string m) : Vehicle(t), Brand(b) {
        modelName = m;
    }
	void displayCar() {
        cout << "Vehicle Type: " << type << endl;
        cout << "Brand: " << brandName << endl;
        cout << "Model: " << modelName << endl;
    }
};
int main() {
    Car c1("SUV", "Ford", "Explorer");
    c1.displayCar();
	return 0;
}
