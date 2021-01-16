#include <iostream>

using namespace std;
                        // program using poiter
class rec
{
   public:
    int length;
    int breath;


         int area()
        {

            return length*breath;
        }


        int perimeter()
    {
        return 2*(length+breath);
    }



};
int main()
{
    rec r;
    rec *c;
    c=&r;
    c->length=100;
    c->breath=300;
    cout<<c->area();
}
