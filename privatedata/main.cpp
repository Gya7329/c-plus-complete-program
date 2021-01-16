// C++ program to access private data

#include<iostream>
using namespace std;

class Circle
{

    private:
        double radius;


    public:
        void setradius(double r)
        {                   // member function can access private
                           // data member radius
            radius = r;

            double area = 3.14*radius*radius;

            cout << "Radius is: " << radius << endl;
            cout << "Area is: " << area;
        }

};

int main()
{

    Circle obj;
                      // access private data member

    obj.setradius(3.5);


    return 0;
}
