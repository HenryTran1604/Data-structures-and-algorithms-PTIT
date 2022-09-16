#include <bits/stdc++.h>

using namespace std;
int a[201], dp[40005], n, s;
// dp[i]: co ton tai day con co tong bang i hay khong
// dp[0] = 1;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
    	cin >> n >> s;
    	memset(dp, 0, sizeof(dp));
    	for(int i = 0; i < n; i++)
    		cin >> a[i];
    	dp[0] = 1; //???
    	for(int i = 0; i < n; i++)
    	{
    		for(int j = s; j >= a[i]; j--)
    		{
    			if(dp[j-a[i]] == 1) //
    				dp[j] = 1;
			}
		}
		if(dp[s] == 1) cout << "YES\n";
		else cout << "NO\n";
    	
	}
    return 0;
}
/*Code by: Tran Quang Huy*/