#include <iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"Enter the Cost price:";
    cin>>cp;
    cout<<"Enter the Selling price";
    cin>>sp;
    if(sp>cp)
    {
        cout<<"Profit is "<<sp-cp;
    }
    else if(cp>sp)
    {
        cout<<"Loss is "<<cp-sp;
    }
    else 
    {
         cout<<"No profit no Loss";
           
        
        
    }
    return 0;
} 