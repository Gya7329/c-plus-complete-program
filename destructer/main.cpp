#include <iostream>

using namespace std;
class demo
{
public:
    demo()
       {

       cout << "Construction of demo:" << endl;
       }
       ~demo()
       {
           cout<<"Deconstuction of demo:"<<endl;
       }



};

class derived:public demo
{

public:
    derived()
    {
        cout<<"constuction of Derived:"<<endl;
    }
~derived()
{
    cout<<"Decontruction of Derived:"<<endl;
}


};

void fun()
{
    derived *d=new derived();
    delete d;
}

int main()
{
    fun();
    return 0;
}
