#include <iostream>
using namespace std;

class Resource {
private:
    int value;

public:
    Resource(int v) {
        value = v;
    }

    Resource(const Resource &r) {
        value = r.value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Resource r1(100);
    Resource r2 = r1;

    r1.display();
    r2.display();

    return 0;
}
