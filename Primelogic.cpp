#include<iostream>
using namespace std;
int main()
{
    int num,i=2;
    cout<<"Enter a number;";
    cin>>num;
while(i<num)
{
    if(num%i==0)
    {
        cout<<"Not prime";
        break;
    }
    i++;

}
if(i==num)
cout<<"Prime";
return 0;
}