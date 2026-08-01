#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    double price;

public:
    void setData(string b, string m, double p) {
        brand = b;
        model = m;
        price = p;
    }

    double getPrice() {
        return price;
    }

    void display() {
        cout << "Car: " << brand << " " << model << " | Price: $" << price << endl;
    }
};

int main() {
    Car myCar;
    
    // Setting the car info directly
    myCar.setData("Toyota", "Camry", 25000.0);
    myCar.display();
    
    cout << "The price tag is: $" << myCar.getPrice() << endl;

    return 0;
}
