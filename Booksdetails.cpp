#include<iostream>
using namespace std;
class Book
{
    public:
    int bookid;
    float price;
    string bookname;
    void getdata()
    {
        cout<<"Enter book id: ";
        cin>>bookid;
        cout<<"Enter book name: ";
        cin>>bookname;
        cout<<"Enter book price: ";
        cin>>price;
    }
    void display()
    {
        cout<<"Book id: "<<bookid<<endl;
        cout<<"Book name: "<<bookname<<endl;
        cout<<"Book price: "<<price<<endl;
    }
    void discount()
    {
        if(price>500)
        {
        price=price-(price*0.1);
        }
        cout<<"After discount, book price: "<<price<<endl;
}
};
int main()
{
    Book b;
    b.getdata();
    b.display();
    b.discount();
    return 0;
}