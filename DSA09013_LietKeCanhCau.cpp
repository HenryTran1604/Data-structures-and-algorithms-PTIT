#include <bits/stdc++.h>
using namespace std;
int n, m;
vector <int> adj[1001];
bool used[1001];
vector <pair <int, int>> edge;
void inp()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		edge.push_back({x, y});
	}
}
void dfs(int u, int s, int t)
{
	used[u] = 1;
	for(int v : adj[u])
	{
		if(u == s && v == t || u == t && v == s)
			continue;
		else
		{
			if(!used[v])
				dfs(v, s, t);
		}
	}
}
void solve()
{
	
	vector <pair <int, int>> bridge;
	for(auto it : edge)
	{
		memset(used, 0, sizeof(used));
		bool ok = 0;
		dfs(1, it.first, it.second);
		for(int i = 1; i <= n; i++)
		{
			if(!used[i])
			{
				ok = 1;
				break;
			}
		}
		if(ok) bridge.push_back(it);
	}
	sort(bridge.begin(), bridge.end());
	for(auto it : bridge)
		cout << it.first << " " << it.second << " ";
	cout << endl;
	edge.clear(); bridge.clear();
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while(test--)
	{
		inp();
		solve();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/