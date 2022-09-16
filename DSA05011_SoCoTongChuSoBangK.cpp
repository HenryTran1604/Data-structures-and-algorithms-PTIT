#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int n, k, dp[101][50001];
// dp[i][j]: so co i chu so co tong la j
// dp[0][j] = 0; voi moi j
// dp[i][0] = 0; voi i > 1;
// dp[1][j] = 1; voi 0 <= j <= 9;
// dp[i][j] += dp[i-1][j-s];

int main()
{
	for(int j = 0; j <= 50000; j++)
		dp[0][j] = 0;
	for(int i = 1; i <= 100; i++)
		dp[i][0] = 0;
	for(int j = 1; j <= 9; j++)
		dp[1][j] = 1;
	for(int i = 1; i <= 100; i++)
	{
		for(int s = 0; s <= 9; s++)
		{
			for(int j = s; j <= 50000; j++)
				dp[i][j] = (dp[i][j] + dp[i-1][j-s])%MOD;
		}
	}
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		cout << dp[n][k] << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/