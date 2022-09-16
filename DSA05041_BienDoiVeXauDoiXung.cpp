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
string s;
void solve(){
	int n = s.length();
	int dp[101][101];
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i < n; i++){
		for(int j = 0, x = i; x < n; j++, x++){
			if(s[j] == s[x]){
				dp[j][x] = dp[j+1][x-1];
			}
			else{
				dp[j][x] = min(dp[j+1][x], dp[j][x-1])+1;
			}
		}
	}
	cout << dp[0][n-1] << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		cin >> s;
		solve();	
	}
	return 0;
}

/*Code by: Tran Quang Huy*/