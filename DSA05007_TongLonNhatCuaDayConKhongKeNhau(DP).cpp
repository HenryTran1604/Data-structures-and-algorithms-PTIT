#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		ll dp[n];
		dp[0] = a[0]; dp[1] = a[1]; dp[2] = a[0]+a[2];
		for(int i = 3; i < n; i++)
		{
			dp[i] = a[i]*1ll + max(dp[i-2], dp[i-3]); // dp[i] tong lon nhat tai vi tri i ma khong ke nhau
		}
		cout << max(dp[n-2], dp[n-1]) << endl;
	}
	return 0;
}
