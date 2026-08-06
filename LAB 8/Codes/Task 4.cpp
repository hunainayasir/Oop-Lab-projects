#include <iostream>
using namespace std;

class Meal {
public:
    void print() {
        cout << "This is a Meal." << endl;
    }
};

class Breakfast : public Meal {
public:
    void print() {
        cout << "Breakfast is the first meal." << endl;
    }
};

class Lunch : public Meal {
public:
    void print() {
        cout << "Lunch is the midday meal." << endl;
    }
};

class Dessert : public Meal {
public:
    void print() {
        cout << "Dessert is something sweet." << endl;
    }
};

class Juice : public Breakfast {
public:
    void print() {
        cout << "Juice is a fresh breakfast drink." << endl;
    }
};

class Cake : public Dessert {
public:
    void print() {
        cout << "Cake is a yummy dessert." << endl;
    }
};

int main() {
    Juice j;
    Cake c;
    Lunch l;
    
    j.print();
    l.print();
    c.print();
    
    return 0;
}
