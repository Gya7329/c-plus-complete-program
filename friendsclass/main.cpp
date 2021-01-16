#include <iostream>
#include<string>

class A {
private:
    char a[16]="heelo";

public:

    friend class B; // Friend Class
};

class B {

public:
    void showA(A& x)
    {

        std::cout<< x.a;
    }
};

int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;
}
