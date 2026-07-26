#include <iostream>
using namespace std;

class List
{
    int arr[5];

public:
    void fill()
    {
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void max()
    {
        int m = arr[0];
        for (int i = 1; i < 5; i++)
            if (arr[i] > m)
                m = arr[i];
        cout << "Max: " << m << endl;
    }

    void min()
    {
        int m = arr[0];
        for (int i = 1; i < 5; i++)
            if (arr[i] < m)
                m = arr[i];
        cout << "Min: " << m << endl;
    }
};

int main()
{
    List l;
    l.fill();
    l.display();
    l.max();
    l.min();
    return 0;
}
