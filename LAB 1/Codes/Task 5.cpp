#include <iostream>
using namespace std;

class TV
{
    string brand;
    string model;
    float price;

public:
    TV(string b, string m, float p)
    {
        brand = b;
        model = m;
        price = p;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }

    void change(string b, string m, float p)
    {
        brand = b;
        model = m;
        price = p;
    }

    ~TV()
    {
    }
};

int main()
{
    TV t("Sony", "X123", 50000);
    t.display();
    t.change("LG", "Y456", 45000);
    t.display();
    return 0;
}
