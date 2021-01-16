#include<iostream>
using namespace std;

class a      //class
{
    public:
        int sub[3], i;
    public:
        void get()
        {
                cout<<"\n Enter Marks out of 100:  ";
                cout<<"\n-----------------------------------";
                cout<<"\n OOPS : ";
                cin>>sub[0];
                cout<<"\n EOS : ";
                cin>>sub[1];
                cout<<"\n DSA : ";
                cin>>sub[2];
                cout<<"\n CAAL : ";
                cin>>sub[3];
        }
};

class Total : public a
{
    protected:

        int total;
    public:

        void sub_total()
        {
        total = sub[0] + sub[1] + sub[2]+sub[3];
        }
};
class Per: public Total       //percentage
{
    private:
        float per;
    public:
        void cal_per() // calculate percentage
        {
                per=total/4;
        }
        void result()
        {
                cout<<"\n ------------------------------- \n";
                cout<<"\n Percentage of a Student : "<<per<<"%";
        }
};
int main()
{
        Per p;
        p.get();
        p.sub_total();
        p.cal_per();
        p.result();
        return 0;
}

