#include <iostream>
using namespace std;

class Car {
private:
    string Model;
    string Company;
    float Price;

public:
    Car(string m, string c, float p) {
        Model = m;
        Company = c;
        Price = p;
    }

    ~Car() {
        cout << "Object Destroyed" << endl;
    }

    void display() {
        cout << "Model: " << Model << endl;
        cout << "Company: " << Company << endl;
        cout << "Price: " << Price << endl;
    }
};

int main() {
    Car c1("Civic", "Honda", 30000);
    Car c2("Corolla", "Toyota", 25000);

    c1.display();
    c2.display();

    return 0;
}
