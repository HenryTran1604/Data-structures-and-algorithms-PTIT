
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, m, s, t;
vector <int> adj[100001], r_adj[100001];
bool used[100001];
stack <int> topo;
void inp()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		r_adj[y].push_back(x);
	}
	memset(used, 0, sizeof(used));
}
void dfs1(int u)
{
	used[u] = 1;
	for(int v : adj[u])
		if(!used[v])
			dfs1(v);
	topo.push(u);
}
void dfs2(int u)
{
	used[u] = 1;
	for(int v : r_adj[u])
		if(!used[v])
			dfs2(v);
}
void solve()
{
		
	for(int i = 1; i <= n; i++)
		if(!used[i])
			dfs1(i);
	int cnt = 0;
	memset(used, 0, sizeof(used));
	while(!topo.empty())
	{
		int u = topo.top(); topo.pop();
		if(!used[u])
		{
			cnt++;
			dfs2(u);
		}
	}
	if(cnt == 1) cout << "YES\n";
	else cout << "NO\n";
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
/*Code by: Tran Quang Huy*/