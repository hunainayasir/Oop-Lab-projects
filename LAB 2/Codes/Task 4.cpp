#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle() {
        radius = 1;
    }

    Circle(double r) {
        radius = r;
    }

    double circumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle c1;
    Circle c2(5);

    cout << "Circumference of c1: " << c1.circumference() << endl;
    cout << "Circumference of c2: " << c2.circumference() << endl;

    return 0;
}
