#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9+7;
int n, m;
char A[101][101];
int used[101][101] ={0};
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
void inp()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> A[i][j];
		}
	}
}
bool check(int x, int y){
	if(x > 0 && x <= n && y > 0 && y <= m && !used[x][y] && A[x][y] == 'W')
		return true;
	return false;
}
void DFS(int x, int y)
{
	used[x][y] = 1;
//	cout << A[x][y]<< endl;
	for(int i = 0; i < 8; i++)
	{
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if(check(x1, y1) == 1)
			DFS(x1, y1);
	}
}
void solve()
{
	int cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(!used[i][j] && A[i][j] == 'W')
			{
				cnt++;
				DFS(i, j);
			}
		}
	}
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