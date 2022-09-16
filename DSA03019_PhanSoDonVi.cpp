#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct PhanSo{
	ll tu, mau;
};
void RutGon(PhanSo &a)
{
	ll gcd = __gcd(a.tu, a.mau);
	a.tu /= gcd;
	a.mau /= gcd;
}
PhanSo operator - (PhanSo a, PhanSo b)
{
	PhanSo c;
	RutGon(a), RutGon(b);
	ll MS = a.mau*b.mau;
	ll TS = a.tu*b.mau - b.tu*a.mau;
	c.tu = TS; c.mau = MS;
	RutGon(c);
	return c;
}
bool cmp(PhanSo a, PhanSo b)
{
	ll ts1 = a.tu*b.mau, ts2 = b.tu*a.mau;
	return ts1 >= ts2;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		vector <PhanSo> v;
		PhanSo a, x; cin >> a.tu >> a.mau;
		RutGon(a);
		ll i = 2; x.tu = 1;
		while(a.tu > 0)
		{
			x.mau = i;
//			cout << i<< " ";
			if(cmp(a, x))
			{
				a = a - x;
				if(a.tu != 0) i = a.mau/a.tu;
				v.push_back(x);
			}
			else i++;
		}
		for(int j = 0; j < v.size()-1; j++)
			cout << v[j].tu << '/' << v[j].mau << " + ";
		cout << v.back().tu << '/' << v.back().mau << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/
