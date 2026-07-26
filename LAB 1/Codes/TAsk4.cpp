#include <iostream>
using namespace std;

class Sample
{
    int a, b;

public:
    Sample()
    {
        a = 100;
        b = 100;
    }

    void avg()
    {
        cout << "Average: " << (a + b) / 2.0 << endl;
    }
};

int main()
{
    Sample s;
    s.avg();
    return 0;
}
