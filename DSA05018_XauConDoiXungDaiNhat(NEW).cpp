#include <bits/stdc++.h>
#define fi first
#define sec second;
#define pii pair<int, int>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		string s; cin >> s;
		int ans = 0, n = s.length();
		// TH1: xau doi xung le, aba
		for(int i = 0; i < n; i++)
		{
			int u = i, v = i, len = 0;
			while(u >= 0 && v < n && s[u] == s[v])
			{
				u--; v++; len++;
			}
			ans = max(ans, 2*len-1);
		}
		
		// TH2: Xau doi xung le, abba
		for(int i = 0; i < n; i++)
		{
			int u = i, v = i+1, len = 0;
			while(u >= 0 && v < n && s[u] == s[v])
			{
				u--; v++; len++;
			}
			ans = max(ans, 2*len);
		}
		cout << ans << endl;
	}
	return 0;
}


/*Code by: Tran Quang Huy*/