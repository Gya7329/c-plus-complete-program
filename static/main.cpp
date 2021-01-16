#include<iostream>
using namespace std;


void fun()
{static int  g=0;
   int a=5;
    g++;
    cout<<a<<" "<<endl<<g;




}
main()
{
    fun();
    fun();
    fun();



}
