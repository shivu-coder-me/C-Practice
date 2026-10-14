#include<iostream>
using namespace std;
class A
{
    protected:
    int res;
    public:
    void sum(int x, int y)
    {
        res = x+y;
        cout<<"Sum = "<<res<<endl;
    }
};
class B: public A
{
    public:
    void sub(int x, int y)
    {
res = x-y;
        cout<<"Subtraction = "<<res<<endl;
    }
};
class C:public B
{
    public:
    void multy( int x, int y)
    {
        res = x*y;
        cout<<"Multiplication = "<<res<<endl;
    }
};
int main()
{
    C obj1;
    obj1.sub(12,4);
    obj1.sum(12,12);
    obj1.multy(12,3);
    return 0;
}