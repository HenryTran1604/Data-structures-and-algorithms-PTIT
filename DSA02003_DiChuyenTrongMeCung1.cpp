#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[20][20], cnt = 0;
char path[50];
void inp()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
}
bool check(int x, int y)
{
	if(x > 0 && x <= n && y > 0 && y <= n && a[x][y] == 1)
		return true;
	return false;
}
void print()
{
	cnt = 1;
	for(int i = 1; i <= 2*(n-1); i++)
		cout << path[i];
	cout << " ";
}
void Try(int i, int x, int y)
{
	int x1 = x+1, y1 = y+1;
	if(check(x1, y))
	{
		path[i] = 'D';
		if(i == 2*(n-1))
			print();
		else Try(i+1, x+1, y);
	}
	if(check(x, y1))
	{
		path[i] = 'R';
		if(i == 2*(n-1))
			print();
		else Try(i+1, x, y+1);
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		
		inp();
		if(a[1][1] == 0)
		{
			cout << -1 << endl;
			continue;
		}
		Try(1, 1, 1);
		if(cnt == 0) cout << -1;
		cout << endl;
		cnt = 0;
	}
	return 0;
}
