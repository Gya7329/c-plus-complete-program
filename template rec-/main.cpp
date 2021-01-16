//Program to print factorial using template:
/*|***********************************|
|Name: Afsana Khatun
|Course: BCA 3rd sem
|Roll no: 190910106011
|Sub:     OOPS Lab
*************************************/
#include <iostream>
using namespace std;

template < int n>
struct Factorial
{

static const int Value = n * Factorial<n-1>::Value ;
};

template <>
struct Factorial<1>{
static const int Value = 1 ;
};

int main(int x,char *c)
  {


 cout << "\t 5! :  = " << Factorial<5>::Value <<endl;
 return 0;
  }

