#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct Move{
	int first, second, step;
};
int n;
int a[101][101];
int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
//			
pair <int, int> st, en;
void init()
{
	n = 8;
	memset(a, 0, sizeof(a));
}
int BFS(int x, int y)
{
	queue <Move> q;
	q.push({x, y, 0});
	
	a[x][y] = 1;
	while(!q.empty())
	{
		Move top = q.front(); q.pop();
		int i = top.first, j = top.second;
		
		for(int k = 0; k < 8; k++)
		{
			int i1 = i + dx[k], j1 = j + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 0)
			{
//				cout << i1 << " " << j1 << " " << top.step << endl;;
				a[i1][j1] = 1;
				if(i1 == en.first && j1 == en.second)
					return top.step+1;
				q.push({i1, j1, top.step+1});
			}
		}
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		init();
		char x, y;
		cin >> x >> st.second >> y >> en.second;
		st.first = x-'a'+1, en.first = y-'a'+1;
		cout << BFS(st.first, st.second) << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/