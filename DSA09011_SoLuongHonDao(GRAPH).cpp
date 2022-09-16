#include <bits/stdc++.h>
using namespace std;
int n, m, a[501][501];
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
bool used[501][501];
void inp()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			used[i][j] = 0;
		}
	}
}
bool check(int x, int y)
{
	if(x > 0 && x <= n && y > 0 && y <= m && a[x][y] && !used[x][y])
		return 1;
	return 0;
}
void dfs(int x, int y)
{
	used[x][y] = 1;
	for(int i = 0; i < 8; i++)
	{
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if(check(x1, y1))
			dfs(x1, y1);
	}
}
void solve()
{
	int cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(a[i][j] && !used[i][j])
			{
				cnt++;
				dfs(i, j);
			}
		}
	}
	cout << cnt << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
		solve();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/