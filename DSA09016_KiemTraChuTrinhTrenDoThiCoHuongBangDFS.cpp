#include <bits/stdc++.h>
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
	}
	memset(color, 0, sizeof(color));
}
bool DFS(int u)
{
	color[u] = 1;
	for(int v : adj[u])
	{
		if(color[v] == 0)
		{
			if(DFS(v)) 
				return 1;
		}	
		else if(color[v] == 1) 
			return 1;
	}
	color[u] = 2;
	return 0;
}
void cycle()
{
	int ok = 0;
	for(int i = 1; i <= n; i++)
	{
		if(color[i] == 0)
		{
			if(DFS(i) == 1)
			{
				ok = 1;
				cout << "YES\n";
				return;
			}
		}
	}
	if(!ok) cout <<"NO\n";
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		inp();
		cycle();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/