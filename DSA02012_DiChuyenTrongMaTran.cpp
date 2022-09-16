#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// N = (n+m-1)C(n-1)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
				cin >> a[i][j];
		}
		ll ans = 1;
		for(ll i = 1; i < m; i++)
		{
			ans = (ans*(n+i-1))/i;
		}
		cout << ans << endl;
	}
	return 0;
}
