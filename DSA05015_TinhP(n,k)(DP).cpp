#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n, k, ans = 1;
		cin >> n >> k;
		for(int i = n; i > n - k; i--)
		{
			ans = (ans*i)%mod;
		}
		cout << ans << endl;
	}
	return 0;
}
