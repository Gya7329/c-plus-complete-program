//Program to Calling Of Constructors And Destructors During Multilevel Inheritance:
/*|***********************************|
|Name: Afsana Khatun
|Course: BCA 3rd sem
|Roll no: 190910106011
|Sub:     OOPS Lab
*************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;
class base
{ private:
    int a;                       //Multilevel Inheritance
    public:

base(int b)
        {
            a=b;
            cout<<"\nBase Constructor Called"; //order of execution of Constructors is Same As the level
            cout<<"\nA= "<<a;
        }
        ~base()
        {
            cout<<"\nBase Destructor Called";
        }
};
class base1:public base
{
    int b;
    public:
        base1(int a,int b):base(b) // the base1 is derived from base
        {
            b=a;
            cout<<"\nBase 1 Constructor Called";// //That is First The Base then Base 1 and Then Derived Class Constructor is Called
            cout<<"\nB= "<<b;
        }
        ~base1()
        {
            cout<<"\nBase1 Destructor Called";
        }
};
class derived:public base1
{
    int x;
    public:
    derived(int y,int a,int b):base1(a,y)//one parameter for base class and other for base 1
    {
        x=y;
        cout<<"\nDerived Construtor Called";
        cout<<"\nX= "<<x;    }
~derived()
{
    cout<<"\nDerived Destructor Called";
}
};
main()
{
    derived d(11,22,33);
}
