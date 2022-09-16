#include <bits/stdc++.h>
#define end '\n'
using namespace std;
using ll = long long;
void inp(ll a[], int n)
{
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		ll a[n], b[n];
		inp(a, n); inp(b, n);
		ll res = 0;
		for(int i = 0; i < n; i++)
		{
			res += a[i]*b[n-1-i];
		}
		cout << res << endl;
	}
	return 0;
}
