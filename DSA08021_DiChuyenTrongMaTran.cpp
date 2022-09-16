#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--){
	    int n, m;
		cin >> n >> m;
		int a[n+1][m+1], d[n+1][m+1], visited[n+1][m+1];
    	memset(d, 0, sizeof(d));
    	memset(visited, 0, sizeof(visited));
    	for(int i = 1; i <= n; i++)
    	{
    		for(int j = 1; j <= m; j++)
    		{
    			cin >> a[i][j];
    		}
    	}
		queue <pair<int, int>> q;
		q.push({1, 1});
		while(!q.empty())
		{
			pair <int, int> p = q.front(); q.pop();
			int i = p.fi;
			int j = p.se;
			int k = a[i][j];
			if(i == n && j == m) break;
			if(i + k <= n && !visited[i+k][j])
			{
				q.push({i+k, j});
				d[i+k][j] = d[i][j] + 1;
				visited[i+k][j] = 1;
			}
			if(j + a[i][j] <= m && !visited[i][j+k])
			{
				q.push({i, j+k});
				d[i][j+k] = d[i][j] + 1;
				visited[i][j+k] = 1;
			}
			
		}
		if(d[n][m]) cout << d[n][m] << endl;
		else cout << -1 << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/