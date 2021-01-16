#include<iostream>
using namespace std;
 class Rectangle
 {
public:
    int length;
    int bredth;
public:
    int area()
    {

        return length*bredth;

    }
int setlength(int l)
{
cout<<"Enter lenghth: " <<endl,cin>>length;
    length=l;

}
int getlength()
{

    return length;
}
int setbreadth(int b)
{
    cout<<"Enter Breadth:- ",cin>>bredth;
    bredth=b;
}
int getbreadth()
{

    return bredth;
}

 };

 int main()
 {
     Rectangle r;
     r.setbreadth();
     r.setlength();
     cout<<r.area();
     return 0;



 }
