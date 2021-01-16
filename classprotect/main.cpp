// protected access modifier

#include <iostream>
using namespace std;

// base class
class Parent

{
                             // protected data members
protected:
    int protect;
};
                             // sub class
class Child : public Parent {

public:
    void setId(int pass)
    {

         // Child class is able to access the inherited
        // protected data members of the base class

        protect = pass;
    }

    void displayId()
    {

        cout<<"protected : "
        <<protect<<endl;
    }
};

int main()
{
Child obj1;
// member function of the derived class can // access the protected data members of the base class
obj1.setId(121);
obj1.displayId();
return 0;
}
