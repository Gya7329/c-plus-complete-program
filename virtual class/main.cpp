#include<iostream>
using namespace std;
class a {
public:
    void disp()
    {

        cout<<"Hello i am base class: ";
    }
};
class b: virtual public a
{

};
class c: virtual public a
{

};
class d: virtual public b, virtual public c
{

};
int main()
{

    d gd;
    gd.disp();
return 0;

}
