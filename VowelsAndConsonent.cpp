#include<iostream>
using namespace std;
int main()
{
    int cons,vols;
    char ch;
    cout<<"Enter the character";
    cin>>ch;
    switch(ch)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
cout<<"Vowel";
break;
default:
cout<<"Consonant";
}
return 0;
}