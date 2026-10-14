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
    for(int i =0; i<n-1;i++)
    {
    for(int j = 0; j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
   cout<<"Ascending order: ";
   for(int i = 0; i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"Descending order: ";
   for(int i = n-1; i>=0;i--)
   {
    cout<<arr[i]<<" ";
   } 
   cout<<endl;
   delete [] arr;
   return 0;
}