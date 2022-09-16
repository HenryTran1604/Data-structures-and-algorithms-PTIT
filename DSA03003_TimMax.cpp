#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		ll res = 0;
		for(ll i = 0; i < n; i++)
		{
			res = (res + (i*a[i])%MOD)%MOD;
		}
		cout << res << endl;
	}
}


