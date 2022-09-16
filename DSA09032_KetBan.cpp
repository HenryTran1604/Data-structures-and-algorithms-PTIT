#include <bits/stdc++.h>
using namespace std;
int n, m, cnt = 0, ans = 0;
vector <int> adj[100001];
bool used[100001];
void inp()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int  i = 0; i <m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(used, 0, sizeof(used));
}
void dfs(int u)
{
	used[u] = 1; cnt++;
	for(int v : adj[u])
	{
		if(!used[v])
			dfs(v);
	}
}
void solve()
{
	for(int i = 1; i <= n; i++)
	{
		if(!used[i])
		{
			cnt = 0;
			dfs(i);
		}
		ans = max(cnt, ans);
	}
	cout << ans << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
		solve();
		cnt = 0; ans = 0;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/