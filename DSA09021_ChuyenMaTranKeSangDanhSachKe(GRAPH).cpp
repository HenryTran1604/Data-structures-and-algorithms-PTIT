#include <bits/stdc++.h>
using namespace std;
int n, a[1001][1001];
vector <int> adj[1001];
void solve()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if(a[i][j])
				adj[i].push_back(j);
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int x : adj[i])
			cout << x << " ";
		cout << endl;
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; t = 1;
	while(t--)
	{
		solve();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/