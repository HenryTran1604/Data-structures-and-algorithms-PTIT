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
		cout << a[n-1]*b[0];
		cout << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/
