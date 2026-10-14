#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many numbers: ";
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter " << n<< " numbers\n: ";
    for(int i = 0;i<n;i++)

{
    cin>>arr[i];
}
int smallest = arr[0];
int largest = arr[0];
for(int i =1; i<n;i++)
{
    if(arr[i]<smallest)
    smallest = arr[i];
    if(arr[i]>largest)
    largest = arr[i];
}
cout<<"Smallest number is: "<<smallest<<endl;
cout<<"Largest number is: "<<largest<<endl;
delete[] arr;
return 0;
}