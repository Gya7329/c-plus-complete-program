#include <iostream>

using namespace std;

int max(int x,int y , int z=660)
{


    return x>y && x>z ? x:y>z?y:z;

}
main()
{

    int c=max(18,37);
    cout<<c<<endl;

}
