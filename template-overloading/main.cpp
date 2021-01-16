#include<iostream>
#include<string>
template <typename T>
int swap( T &a , T &b)
{
    T temp=a;
    a=b;                              // when use using namespace
    b=temp;

}
template <typename T>
void swap( T a[],T b[],int size)
{
    for (int i=0;i<size;i++)
    {
          T temp=a[i];
          a[i]=b[i];
          b[i]=temp;
    }
}
int main()
{
    int a=10;
    int b=20;
    swap( a,b);
  std:: cout<<"a : "<< a<< "\t b :"<<b<<"\n";
   std:: string first_name="Gyasuddin";
    string last_name="Ansari";
    swap(first_name,last_name);
    cout<<first_name<<" "<<last_name<<std::endl;

    return 0;

}

