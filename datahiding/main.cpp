#include<iostream>
using namespace std;
class Rectangle
{
private:
 int length;
 int breadth;
public:
 void area()
 {
     return length*breadth;

 }
 void setlength(int l)// for set private data
 {
     if(l>=0)
        length=l;

 }
 void setbreath(int b)
 {
     if(b>=0)
        breadth=b;


 }

 void getlength()
 {
  return length;


 }
 void getbreath()
 {

     return breadth;


 }


 int main()
 {

     Rectangle r;
     r.getlength(3);
     r.getreath(4);
     cout<<r.area();
     return 0;
 }


