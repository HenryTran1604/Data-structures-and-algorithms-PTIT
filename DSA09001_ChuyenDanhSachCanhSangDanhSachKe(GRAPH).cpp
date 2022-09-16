#include <bits/stdc++.h>
using namespace std;
int n, m;
vector <int> adj[1001];
void solve()
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
	for(int i = 1; i <= n; i++)
	{
		cout << i << ": ";
		for(int x : adj[i])
			cout << x << " ";
		cout << endl;
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/