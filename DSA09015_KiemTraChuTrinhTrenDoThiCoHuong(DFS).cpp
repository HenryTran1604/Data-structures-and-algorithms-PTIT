#include <bits/stdc++.h>
#define endl '\n';

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
int n, m;
vector <int> adj[1001];
int color[1001];
void inp()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
//		adj[y].push_back(x);
	}
	memset(color, 0, sizeof(color));
}
bool dfs(int u)
{
	color[u] = 1;
	for(int v : adj[u])
	{
	    if(color[v] == 0)
	    {
	        if(dfs(v))
	            return 1;
	    }
	    else if(color[v] == 1)
	        return 1;
	}
	color[u] = 2;
	return false;
}
void check()
{
	for(int i = 1; i <= n; i++)
	{
		if(!color[i])
			if(dfs(i))
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