
#include<iostream>

#include<fstream>

using namespace std;

int main()
{
    ofstream outfile("my.txt",ios::app;
    outfile<<"Hello"<<endl;
    outfile<<25<<endl;
    outfile<<"Fine"<<endl;
    outfile.close();
}
