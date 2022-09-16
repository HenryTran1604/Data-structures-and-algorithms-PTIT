#include <bits/stdc++.h>
#define fi first
#define sec second
using namespace std;
int dp[1001][1001];
// dp[i][j]: xau tu i den j co doi xung hay khong
// if s[i] == s[j] dp[i][j] = dp[i+1][j-1] duyet j truoc i
// if s[i] != s[j] dp[i][j] = 0;
// dp[i][i] = 1 voi moi i, j;
string s;
void FindMax()
{
	int ans = 1;
	int n = s.length(); 
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			dp[i][j] = 1;
	for(int j = 1; j < n; j++)
	{
		for(int i = 0; i < j; i++)
		{
			if(s[i] == s[j])
			{
				dp[i][j] = dp[i+1][j-1];
				if(dp[i][j] == 1)
					ans = max(ans, j-i+1);
			}
			else dp[i][j] = 0;
		}
	}
	cout << ans << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int tt; cin >> tt;
	while(tt--)
	{
		cin >> s;
		FindMax();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/
