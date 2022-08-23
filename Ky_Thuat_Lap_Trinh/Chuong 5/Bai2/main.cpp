#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;

struct ToaDo
{
    ll x, y;
};

void Input(ToaDo &t)
{
    cin>>t.x>>t.y;
}

void Output(ToaDo t)
{
    cout<<"("<<t.x<<", "<<t.y<<")";
}

double Dis(ToaDo a, ToaDo b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main()
{
    ToaDo a, b;
    Input(a);
    Input(b);
    cout<<"Toa do diem A: ";
    Output(a);
    cout<<endl;
    cout<<"Toa do diem B: ";
    Output(b);
    cout<<endl;
    cout<<"Khoang cach cua 2 diem: "<<Dis(a, b);
    return 0;
}
