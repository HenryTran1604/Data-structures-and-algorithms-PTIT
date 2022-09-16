#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;

void inp(ll *a, int n)
{
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		ll a[n], b[m];
		inp(a, n); inp(b, m);
		sort(a, a+n); sort(b, b+m);
		int l1 = 0, l2 = 0;
		while(l1 < n && l2 < m)
		{
			if(a[l1] < b[l2])
			{
				cout << a[l1] << " ";
				l1++;
			}
			else{
				cout << b[l2] << " ";
				l2++;
			}
		}
		for(int i = l1; i < n; i++)
			cout << a[i] << ' ';
		for(int i = l2; i < m; i++)
			cout << b[i] << " ";
		cout << endl;
	}
	return 0;
}
