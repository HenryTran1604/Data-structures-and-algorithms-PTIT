#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;
struct Move{
	int x, y;
	ll step;
};
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int n;
char a[101][101];
pii st, en;
void inp()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> st.fi >> st.sec >> en.fi >> en.sec;
}
ll BFS()
{
	queue <Move> q;
	q.push({st.fi, st.sec, 0});
	a[st.fi][st.sec] = 'X';
	
	while(!q.empty())
	{
		Move top = q.front(); q.pop();
		int i = top.x, j = top.y;
		ll cnt = top.step;
		if(en.fi == i && en.sec == j) return cnt;
		for(int x = i-1; x >= 0 && a[x][j] == '.'; x--) // U
		{
			if(x == en.fi && j == en.sec) return cnt+1;
			a[x][j] = 'X';
			q.push({x, j, cnt+1});
		}
		for(int y = j+1; j < n && a[i][y] == '.'; y++) // R
		{
			if(i == en.fi && y == en.sec) return cnt+1;
			a[i][y] = 'X';
			q.push({i, y, cnt+1});
		}
		for(int x = i+1; x < n && a[x][j] == '.'; x++) // D
		{
			if(x == en.fi && j == en.sec) return cnt+1;
			a[x][j] = 'X';
			q.push({x, j, cnt+1});
		}
		for(int y = j-1; y >= 0 && a[i][y] == '.'; y--) // L
		{
			if(i == en.fi && y == en.sec) return cnt+1;
			a[i][y] = 'X';
			q.push({i, y, cnt+1});
		}
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		inp();
		cout << BFS() << endl;;
	}
	return 0;
}
//10
//.X...X...X
//...X...X.X
//XXXXXXXX..
//.X.X...X..
//.X...X...X
//.X.XXXXXXX
//.X........
//.XXXX.XXXX
//.XXX..XXX.
//.....XXX..
//0 0 3 0


/*Code by: Tran Quang Huy*/