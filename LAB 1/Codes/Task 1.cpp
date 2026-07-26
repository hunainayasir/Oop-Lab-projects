#include <iostream>
using namespace std;

class Book
{
    int BookID, Pages;
    float Price;

public:
    void get()
    {
        cin >> BookID >> Pages >> Price;
    }

    void show()
    {
        cout << "Book ID: " << BookID << endl;
        cout << "Pages: " << Pages << endl;
        cout << "Price: " << Price << endl;
    }

    void set(int id, int p, float pr)
    {
        BookID = id;
        Pages = p;
        Price = pr;
    }

    float getprice()
    {
        return Price;
    }
};

int main()
{
    Book b1, b2;

    b1.get();
    b2.get();

    if (b1.getprice() > b2.getprice())
        b1.show();
    else
        b2.show();

    return 0;
}
