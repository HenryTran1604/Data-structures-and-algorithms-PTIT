#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
bool dfs(int u)
{
	used[u] = 1;
	for(int v : adj[u])
	{
		if(!used[v])
		{
			parent[v] = u;
			if(dfs(v))
				return true;;
		}
		else if(v != parent[u])
			return true;
	}
	return false;
}
void check()
{
	for(int i = 1; i <= n; i++)
	{
		if(!used[i])
		{
			if(dfs(i))
			{
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while(test--)
	{
		inp();
		check();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/