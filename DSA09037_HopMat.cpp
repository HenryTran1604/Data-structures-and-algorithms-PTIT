#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9+7;
int k, n, m; // k: so nguoi, n: so dinh, m: so canh
int id[1001], visited[1001]; // vi tri moi nguoi ban dau
vector <int> adj[1001];
bool used[1001];

void inp()
{
	cin >> k >> n >> m;
	for(int i = 1; i <= k; i++)
		cin >> id[i];
	for(int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
}
void dfs(int u) // danh sach cac dinh
{
	used[u] = 1;
	visited[u]++;
	for(int v : adj[u])
	{
		if(!used[v])
			dfs(v);
	}
}
void solve()
{
	for(int i = 1; i <= k; i++)
	{
		memset(used, 0, sizeof(used));
		dfs(id[i]);
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++)
		if(visited[i] == k)
			cnt++;
	cout << cnt;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
	int t; t = 1;
	while(t--)
	{
		inp();
		solve();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/