#include <iostream>
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b)
{
    ll r;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

ll lcm(ll a,ll b)
{
    return a/gcd(a,b)*b;
}

struct PhanSo{
	ll Tu, Mau;
};

void Input(PhanSo &p){
	cin >> p.Tu >> p.Mau;
}

void Output(PhanSo p){
	cout << p.Tu << "/" << p.Mau << endl;
}

void Rutgon(PhanSo &p){
	ll l = gcd(p.Tu, p.Mau);
	p.Tu /= l;
	p.Mau /= l;
}

PhanSo Sum(PhanSo a, PhanSo b)
{
    ll Mauchung = lcm(a.Mau, b.Mau);
	a.Tu = Mauchung / a.Mau * a.Tu;
	b.Tu = Mauchung / b.Mau * b.Tu;
	a.Tu += b.Tu;
	a.Mau = Mauchung;
	Rutgon(a);
	return a;
}

PhanSo Sub(PhanSo a, PhanSo b)
{
    ll Mauchung = lcm(a.Mau, b.Mau);
	a.Tu = Mauchung / a.Mau * a.Tu;
	b.Tu = Mauchung / b.Mau * b.Tu;
	a.Tu -= b.Tu;
	a.Mau = Mauchung;
	Rutgon(a);
	return a;
}

PhanSo Mul(PhanSo a, PhanSo b)
{
	a.Tu *= b.Tu;
	a.Mau *= b.Mau;
	Rutgon(a);
	return a;
}

PhanSo Div(PhanSo a, PhanSo b)
{
	a.Tu *= b.Mau;
	a.Mau *= b.Tu;
	Rutgon(a);
	return a;
}

int main() {
	PhanSo a, b, tmp;
	Input(a);
	Input(b);
	tmp = Sum(a, b);
	cout<<"Tong 2 phan so: ";
	Output(tmp);
	tmp = Sub(a, b);
    cout<<"Hieu 2 phan so: ";
    Output(tmp);
    tmp = Mul(a, b);
    cout<<"Tich 2 phan so: ";
    Output(tmp);
    tmp = Div(a, b);
    cout<<"Thuong 2 phan so: ";
    Output(tmp);
	return 0;
}
