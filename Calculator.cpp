#include <iostream>
using namespace std;

class calculator
{
    int a, b, c;

public:

    // Default constructor
    calculator()
    {
        a = 11;
        b = 22;
        c = a + b;
    }

    // Parameterized constructor
    calculator(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
    }

    void print()
    {
        cout << c << endl;
    }
};

int main()
{
    calculator c1;
    c1.print();

    calculator c2(15, 10);
    c2.print();

    return 0;
} 