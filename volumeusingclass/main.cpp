

#include<iostream>
using namespace std;

class Rectangle

{

protected:

int l,w,area;

public:

void getdata()

{

cout<<"enter data :";

cin>>l>>w;

}

void print()

{

area=l*w;

cout<<area;

}

};

class cube : public Rectangle

{

int height,volume;

public:

void getdata()

{

cout<<"enter height, length,width : ";

cin>>height>>l>>w;

}

void dprint()

{

volume=l*height*w;

cout<<volume;

}

};

int main()

{

cube c;

c.getdata();
c.dprint();
return 0;

}
