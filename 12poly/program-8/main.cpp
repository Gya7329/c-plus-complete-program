#include<iostream>
using namespace std;

class A
{
        protected:
                int a, b;
        public:
                void accept()
                {
                        cout<<"\nFirst Number : ";
                        cin>>a;
                        cout<<"\nSecond Number : ";
                        cin>>b;
                }
};
class B: public A
{
                int sum;
        public:
                void add()
                {
                        sum = a + b;
                }
                void display()
                {
                        cout<<"\n Add: "<<sum;
                }
};
int main()
{
        B a;
        a.accept();
        a.add();
        a.display();
        return 0;
}

