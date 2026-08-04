#include <iostream>
using namespace std;

class Shape {
protected:
    float length;
    float width;

public:
    Shape(float l, float w) {
        length = l;
        width = w;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(float l, float w) : Shape(l, w) {
    }

    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }

    void calculateArea() {
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    float l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;

    Rectangle r1(l, w);
    r1.calculateArea();

    return 0;
}
