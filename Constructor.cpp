#include<iostream>
using namespace std;
class calculator
{
    int a,b,c;
    public:
    calculator()
    {
        a=10,b=20;
        cout<<"Constructor called"<<endl;
    }
    calculator(int x,int y)
    {
        a=x;
        b=y;   
        cout<<"Parameterized constructor called"<<endl; 
    }
    void sum()
    {
        c=a+b;
        cout<<"Sum is: "<<c<<endl;
    }
};int main()
{
    calculator c1(67,81),c2;
    c1.sum();
    c2.sum();
    return 0;
}