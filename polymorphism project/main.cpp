
#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{



 int choice =0;
    while(choice != 9)
    {
        printf("\n\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Rectangle Area\n2.Rectangle Perimeter\n3.Cirle 4.exit\n");
printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
perimeter();

            break;
            default:
            printf("Please enter valid choice..");
        }
    }
}




class Shape
{
public:
 virtual float area()=0;
 virtual float perimeter()=0;
};

class Rectangle:public Shape
{
private:
 float length;
 float breadth;
public:
 Rectangle(int l=1,int b=1)
 {
     length=1;
     breadth=b;
 }

 float area()
     {
      return length*breadth;
      }
 float perimeter()
 {
     return 2*(length+breadth);
     }

};
class Circle:public Shape
{
private:
 float radius;
public:
 Circle(float r)
 {
     radius=r;
     }
 float area()
 {
     return 3.1425*radius*radius;
     }
 float perimeter()
 {
     return 2*3.1425*radius;
     }
};
int main()
{
 Shape *s=new Rectangle(10,5);
 cout<<"Area of Rectangle "<<s->area()<<endl;
 cout<<"Perimeter of Rectangle "<<s->perimeter()<<endl;

 s=new Circle(10);
 cout<<"Area of Circle "<<s->area()<<endl;
 cout<<"Perimeter of Circle "<<s->perimeter()<<endl;

}
