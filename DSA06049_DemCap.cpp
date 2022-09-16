#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		ll a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		ll cnt = 0;
		for(int i = 0; i < n-1; i++)
		{
			int id = lower_bound(a+i+1, a+n, a[i] + k) - a;
			cnt += id - i -1;
		}
		cout << cnt << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/
