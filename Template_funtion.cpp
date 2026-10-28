#include<iostream>
using namespace std;
template <typename T>
T sum(T a,T b)
{
    return a+b;
}
int main()
{
    string a="Hello", b=" World";
    cout<<"Sum =" << sum(10,12)<<endl;
    cout<<"Sum =" << sum(10.5,12.2)<<endl;
    cout<<"Sum =" << sum('A','9')<<endl;
    cout<<"Sum =" << sum(a,b)<<endl;
    cout<<"Sum =" << sum (string("sandeep"),string("Sir"))<<endl;
    
}