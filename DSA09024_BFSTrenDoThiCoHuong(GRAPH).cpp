#include <bits/stdc++.h>
using namespace std;
int n, m, s;
vector <int> adj[1001];
bool used[1001];
void inp()
{
	cin >> n >> m >> s;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
//		adj[y].push_back(x);
	}
	memset(used, 0, sizeof(used));
}
void bfs(int u)
{
	used[u] = 1;
	cout << u << " ";
	queue <int> q;
	q.push(u);
	while(!q.empty())
	{
		int v = q.front(); q.pop();
		for(int x : adj[v])
		{
			if(!used[x])
			{
				cout << x << " ";
				used[x] = 1;
				q.push(x); 
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		inp();
		bfs(s);
		cout << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/