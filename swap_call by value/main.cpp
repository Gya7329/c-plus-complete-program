#include <iostream>

using namespace std;

void swap(int *a, int *b)


{
  int t;
  t=*a;
  *a=*b;
  *b=t;

}


int main()
{
    int x=20,y=10;
    swap(&x,&y);
cout<<x<<endl<<y<<endl;





}

