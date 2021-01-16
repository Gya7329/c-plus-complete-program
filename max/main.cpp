#include <iostream>

using namespace std;

int max(int a,int b,int c,int d)
{
   if(a>b && a>c && a>d)
    return a;
   else if(b>c && b>d)
    return b;
   else if (c>d)
    return c;
    else return d;

}
int main()

{


int x,y,z,u,r;
cin>>x>>y>>z>>u;
r=max(x,y,z,u);
cout<<r<<endl;
return 0;
}
