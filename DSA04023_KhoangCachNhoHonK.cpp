#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		ll a[n];
		for(int i = 0; i < n; i++)
			cin >>a[i];
		sort(a, a+n);
		ll cnt = 0;
		for(int i = 0; i < n-1; i++)
		{
			ll id = lower_bound(a+i+1, a+n, k + a[i]) - a;
//			cout << id << endl;
			cnt += id - i -1;
		}
		cout << cnt << endl;
	}
	return 0;
}
