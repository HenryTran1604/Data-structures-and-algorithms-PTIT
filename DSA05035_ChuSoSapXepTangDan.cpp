#include <bits/stdc++.h>
#define maxn 1000001
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int dp[101][101], cnt[101];
// dp[i][j]: so co i chu so ma ket thuc bang j;
// dp[1][0] = 1;
// dp[0][j] = 0; voi moi j
// dp[i][0] = 1; voi moi i;
// dp[i][j] = tong(dp[i-1][j = j-1, j-2, ... 1, 0]);
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	for(int k = 0; k <= 100; k++)
	{
		dp[0][k] = 0;
		dp[k][0] = 1;
	}
	
	for(int i = 1; i <= 100; i++)
	{
		cnt[i] = 1; //dp[i][0] = 1;
		for(int j = 1; j <= 9; j++)
		{
			dp[i][j] = 0;
			for(int k = j; k >= 0; k--)
				dp[i][j] = (dp[i][j] + dp[i-1][k])%MOD;
			cnt[i] = (cnt[i] + dp[i][j])%MOD;
		}
	}
	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		cout << cnt[n] << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/