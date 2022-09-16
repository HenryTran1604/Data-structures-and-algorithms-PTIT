#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; t = 1;
	while(t--)
	{
		int n; cin >> n;
		ll sum = 0;
		for(int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			if(x > 0) sum += 2*x;
		}
		cout << sum << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/