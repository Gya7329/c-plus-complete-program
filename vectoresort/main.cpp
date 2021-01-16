// C++ program to sort a vector in non-decreasing
// order.
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{    int n,elt;
     cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i++)
{  cin>>elt;
   v.push_back(elt);

}



    sort(v.begin(), v.end());


    for (auto x : v)
        cout << x << " ";

    return 0;
}
