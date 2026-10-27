#include<iostream>
using namespace std;
int main()
{
    int *ptr,n,total=0,i;
    cout<<"How many number you want to add: ";
    cin>>n;
    ptr=new int [n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter number";
        cin>>ptr[i];
        total+=ptr[i];
    }
    cout<<"All Number is:-\n";
    for(i=0;i<n;i++)
    {
        cout<<ptr[i]<<"\t";
    }
    cout<<"\nTotal is: "<<total;
}