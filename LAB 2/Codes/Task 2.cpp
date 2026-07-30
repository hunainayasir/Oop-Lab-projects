#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    Rectangle(const Rectangle &r) {
        length = r.length;
        width = r.width;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1(5, 4);
    Rectangle r2 = r1;

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;

    return 0;
}
