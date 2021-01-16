 #include <iostream>
using namespace std;

void add_sub(int *a,int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;

    if(*b < 0)
 {
        *b = -(*b);
    }
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin>>a>>b;
    add_sub(pa, pb);
    cout<<a<<"\n"<<b;

    return 0;
}
