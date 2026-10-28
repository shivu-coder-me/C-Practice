
#include<iostream>
using namespace std;

void swap1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap3(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    int i = 10, j = 20;
    int n = 10, m = 20;

    swap1(x, y);
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

    swap2(&i, &j);
    cout << "i=" << i << endl;
    cout << "j=" << j << endl;

    swap3(n, m);
    cout << "n=" << n << endl;
    cout << "m=" << m << endl;

    return 0;
}
