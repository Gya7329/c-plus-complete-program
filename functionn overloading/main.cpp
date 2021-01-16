#include <iostream>
using namespace std;


void show(int x, float y) {
    cout << "Integer number: " << x;
    cout << " Float number : " << y << endl;
}


void show(double z) {
    cout << "Double number: " << z << endl;
}

void show(int z) {
    cout << "Integer number: " << z << endl;
}
void show(long long int z)
{
    cout<<"Integer number: "<<z<<endl;


}

int main() {

    int a = 5;
    double b = 5.5;
    float c=9.989888898;
long long int d=77373636636356;
    show(a);


    show(b);

    show(a, b);
    show(a,c);
    show(d);

    return 0;
}
