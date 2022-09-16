#include <bits/stdc++.h>
#define endl '\n';

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
int n, m;
vector <int> adj[1001];
bool used[1001];
int parent[1001];
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
	}
	memset(used, 0, sizeof(used));
	memset(parent, 0, sizeof(parent));
}
bool bfs(int u)
{
	used[u] = 1;
	queue <int> q;
	q.push(u);
	while(!q.empty())
	{
		int v = q.front(); q.pop();
		for(int x : adj[v])
		{
			if(!used[x])
			{
				used[x] = 1;
				parent[x] = v;
				q.push(x);
			}
			else if(x != parent[v])
				return 1;
		}
	}
	return 0;
}
void check()
{
	for(int i = 1; i <= n; i++)
	{
		if(!used[i])
			if(bfs(i))
			{
				cout << "YES\n";
				return;
			}
	}
	cout << "NO\n";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		inp();
		check();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/