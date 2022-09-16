#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;;
	while(t--)
	{
		int a[105],n, s = 0;
		cin >> n;
		for(int i = 0; i < n;i++ )
		{
			cin >> a[i];
			s+=a[i];
		}
		if(s%2==1)
		{
			cout << "NO\n";
		}
		else
		{
			s /= 2;
			int dp[s+1];
			dp[0] = 1;
			for(int i = 0; i < n; i++)
			{
				for(int j = s; j >= a[i]; j--)
				{
					if(dp[j-a[i]]==1) dp[j] = 1;
				}
			}
			if(dp[s]==1) cout <<"YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}
