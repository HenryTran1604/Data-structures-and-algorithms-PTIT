#include <bits/stdc++.h>
using namespace std;
string s; int k;
void solve()
{
	int a[26] = {0}, n = s.length();
	int cmp = (n+1)/k;
	
	for(int i = 0; i < s.length(); i++)
	{
		a[s[i]-'A']++;
		if(a[s[i]-'A'] > cmp)
		{
			cout << -1 << endl;;
			return;
		}
	}
	cout << 1 << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> k >> s;
		solve();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/