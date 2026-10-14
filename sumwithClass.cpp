#include<iostream>
using namespace std;
class number
{
    
    int a=100,b=90,c;
  public:
void sum()
{
    c=a+b;
    cout<<"Sum = " <<c<<endl;
}
  void sub()
{
    c=a-b;
    cout<<"Sub = " <<c<<endl;
}
};
int main()
{
   number o1;
   o1.sum();
   o1.sub();
   return 0;
}
