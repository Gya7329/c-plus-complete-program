#include <iostream>

using namespace std;
class test
{
public:

    void fun1()
    {


    cout<<"Inline\n";
}
inline void fun2();
};
void test::fun2()
{
    cout<<"inline";
}

int main()
{
   test t;
   t.fun1();
   t.fun2();
    return 0;
}
