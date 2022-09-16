#include <bits/stdc++.h>
using namespace std;
int n, k;
int used[10], id[10], ans = INT_MAX;
string s[9];
void calc()
{
	int maxn = INT_MIN, minn = INT_MAX;
	for(int i = 1; i <= n; i++) // duyet tung so
	{
		int tmp = 0;
		for(int j = 1; j <= k; j++) // duyet tung hoan vi
			tmp = 10*tmp + s[i][id[j]-1]-'0';
		maxn = max(tmp, maxn);
		minn = min(tmp, minn);
	}
	ans = min(ans, maxn - minn);
}
void Try(int i)
{
	for(int j = 1; j <= k; j++)
	{
		if(!used[j])
		{
			used[j] = 1;
			id[i] = j;
			if(i == k)
				calc();
			else Try(i+1);
			used[j] = 0;
		}
	}
}
void inp()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
		cin >> s[i];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; t = 1;
	while(t--)
	{
		inp();
		Try(1);
		cout << ans;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/