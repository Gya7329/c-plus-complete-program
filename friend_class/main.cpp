#include <iostream>

using namespace std;
class marks;
class test
{
private:
    int a=10;
protected:
    int b=20;
public:
    int c=34;
    friend marks;


};
class marks
{
public:
test n;
    void fun()
    {
       cout<< n.a;
        cout<<n.b;
        cout<<n.c;


    }
};

int main()
{

}

