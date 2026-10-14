#include<iostream>
using namespace std;
class Rectangle 
    { 
        public:
         int length;
            int breadth;
            int areaValue;
            int perimeterValue;
            void input()
            {
                cout<<"Enter the length and breath of rectangle:";
                cin>>length>>breadth;
            }
            void area()
            {
                
                areaValue = length*breadth;

            }
            void perimeter()
            {
                
                perimeterValue = 2*(length+breadth);
            }
            void display()
            {
                cout<<"Area of rectangle is : "<<areaValue<<endl;
                cout<<"Perimeter of rectangle is : "<<perimeterValue<<endl;

            }
        };
        int main()
        {
            Rectangle r;
            r.input();
            r.area();
            r.perimeter();
            r.display();
            return 0;
        }