#include <iostream>

using namespace std;

class diagonal
{
private:
    int *A;
    int n;
public:
    diogonal()
    {
        n=2;
        A=new int [2];

    }

    diagonal(int n)
{

    this->n=n;
    A=new int[n];


}

    ~diagonal( )
    {


        delete []A;
    }

    void set(int i,int j ,int x);
    int get(int i , int j);
    void display();
};
void diagonal::set(int i, int j, int x)
{

    if(i==j)
    A[i-1]=x;



}
int diagonal::get(int i,int j)
{

    if(i==j)
        return A[i-1];
    return 0;


}
void diagonal::display()
{

    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n;j++)
        {


            if(i==j)
            cout<<A[i]<<" ";
            else
                cout<<"0";
        }

        cout<<endl;

    }


}













int main()
{int d;
cout<<"enter dimenstion";
cin>>d;

diagonal dm(d);
int x;

 cout<<"Enter All Elements";
 for(int i=1;i<=d;i++)
 {
 for(int j=1;j<=d;j++)
 {
 cin>>x;
 dm.set(i,j,x);
 }
 }

 dm.display();

    return 0;
}
