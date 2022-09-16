#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int a[1005], n, k, dp[1005];
int calc(){
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= n; j++){
			if(a[j] <= i)
				dp[i] = (dp[i] + dp[i - a[j]])%MOD;
		}
	}
	return dp[k];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		cout << calc() << endl;
	}
	return 0;
}


/*Code by: Tran Quang Huy*/