#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m, num;
vector <int> adj[1001];
vector <int> T;
int used[1001];
void inp()
{
	cin >> n ;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	T.clear();
	for(int i = 0; i < n-1; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(used, 0, sizeof(used));
}
void DFS(int u)
{
	used[u] = 1;
	T.push_back(u);
	for(int v : adj[u])
	{
		if(!used[v])
		{
			DFS(v);
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		inp();
		DFS(1);
		if(T.size()==n) cout << "YES\n";
		else cout <<"NO\n";
	}
	return 0;
}
/*Code by: Tran Quang Huy*/