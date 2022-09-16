#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int a[26] = {0}, maxn = 0, n = s.length();
		for(int i = 0; i < n; i++)
		{
			a[s[i]-'a']++;
			maxn = max(maxn, a[s[i] -'a']);
		}
//		cout << maxn << endl;
		if(maxn > (n+1)/2) cout << -1;
		else cout << 1;
		cout << "\n";
	}
}


