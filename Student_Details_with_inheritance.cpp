#include<iostream>
#include<string>
using namespace std;
class student
{
    protected;
    int rollno,phoneno;
    string name;
    public:
    void details()
    {
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter phoneno:";
        cin>>phoneno;
        cout<<"Enter name:";
        cin>>name;
    }
};
class Fee
{
  public:
  int tution_fee,sports_fee,hostel_fee,total_fee,Miscellaneous_fee;
  void fee()
  {
    cout<<"Enter tution_fee:";
    cin>>tution_fee;
    cout<<"Enter sports_fee:";
    cin>>sports_fee;
    cout<<"Enter hostel_fee:";
    cin>>hostel_fee;
    cout<<"Enter Miscellaneous_fee:";
    cin>>Miscellaneous_fee;
  }
  void calculate()
  {
    total_fee=tution_fee+sports_fee+hostel_fee+Miscellaneous_fee;
  }
};
class display : public student,public Fee
{
  public:
  void show()
  {
    cout<<"Student details:"<<endl;
    cout<<"Rollno:"<<rollno<<endl;
    cout<<"Phoneno:"<<phoneno<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Fee details:"<<endl;
    cout<<"Tution_fee:"<<tution_fee<<endl;
    cout<<"Sports_fee:"<<sports_fee<<endl;
    cout<<"Hostel_fee:"<<hostel_fee<<endl;
    cout<<"Miscellaneous_fee:"<<Miscellaneous_fee<<endl;
    cout<<"Total_fee:"<<total_fee<<endl;
  }
};
int main()
{
    display d;
    d.details();
    d.fee();
    d.calculate();  
    d.show();
    return 0;
}