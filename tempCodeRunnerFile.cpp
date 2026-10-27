#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    A()
    {
        x=100;
    }
    A(A& obj)
    {
        this->x=obj.x;
    }
    ~A()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
 A one;
 one.x = 90;A two;
 two =one;
 cout<<"Two .x="<<two.x<<endl;
 return 0;
}