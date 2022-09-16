#include <bits/stdc++.h>
using namespace std;
int n, m, maxlen = 0;
int a[21][21];
void inp()
{
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	for(int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
}
void dfs(int u, int len)
{
	maxlen = max(len, maxlen);
//	cout << u << " ";
	for(int v = 0; v < n; v++)
	{
		if(a[u][v] == 1)
		{
			a[u][v] = a[v][u] = 0; // danh dau da di qua canh (u, v)
			dfs(v, len+1);
			a[u][v] = a[v][u] = 1;
		}
	}
}
void process()
{
	for(int i = 0; i < n; i++)
	{
		dfs(i, 0);
	}
	cout << maxlen << endl;
}
int main()
{
	
	int t; cin >> t;
	while(t--)
	{
		inp();
		maxlen = 0;
		process();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/
