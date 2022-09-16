#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
/*
	dp[i][j]: so ki tu it nhat can bo di de xau con tu i den j la doi xung
	-> tinh lan luot: j - i = 0
					  j - i = 1 ...
					  j - i = n-1
	neu s[i] == s[j] dp[i][j] = dp[i+1][j-1]
	neu s[i] != s[j] dp[i][j] = min(dp[i+1][j], dp[i][j-1]) + 1
*/
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		string s; cin >> s;
		int n = s.length();
		int dp[n+1][n+1];
		memset(dp, 0, sizeof(dp));
		for(int i = 0; i < n; i++){
			for(int j = 0, k = i; k < n; j++, k++){
				if(s[j] == s[k]){
					dp[j][k] = dp[j+1][k-1];
				}
				else{
					dp[j][k] = min(dp[j+1][k], dp[j][k-1]) + 1;
				}
			}
		}
		cout << dp[0][n-1] << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/