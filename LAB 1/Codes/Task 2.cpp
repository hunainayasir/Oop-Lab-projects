#include <iostream>
using namespace std;

class Result
{
    int roll;
    string name;
    int marks[3];

public:
    void input()
    {
        cin >> roll >> name;
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }

    void show()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
            cout << marks[i] << " ";
        cout << endl;
    }

    int total()
    {
        return marks[0] + marks[1] + marks[2];
    }

    float avg()
    {
        return total() / 3.0;
    }
};

int main()
{
    Result r;
    r.input();
    r.show();
    cout << "Total: " << r.total() << endl;
    cout << "Average: " << r.avg() << endl;
    return 0;
}
