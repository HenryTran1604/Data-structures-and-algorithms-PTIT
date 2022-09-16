#include <bits/stdc++.h>
using namespace std;
int k, m, n, used[3][3];
//int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
//int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
char c[3][3];
string dic[105], s;
vector <string> res;
bool isword(string s)
{
	for(int i = 0; i < k; i++)
	{
		if(s == dic[i])	return 1;
	}
	return 0;
}
void Try(int i, int j, string s)
{
	used[i][j] = 1;
	s = s + c[i][j];
	if(isword(s)) res.push_back(s);
//	for(int p = 0; p < 8; p++)
//	{
//		int i1 = i + dx[p];
//		int j1 = j + dy[p];
//		if(i1 >= 0 && i1 < m && j1 >= 0 && j1 < n && !used[i1][j1])
//		{
//			Try(i1, j1, s);
//		}
//	}
	for(int row = i-1; row < m && row <= i+1; row++)
	{
		for(int col = j-1; col < n && col <= j+1; col++)
		{
			if(used[row][col] == 0 && col >= 0 && row >= 0)
				Try(row, col, s);
		}
	}
	s.erase(s.length()-1);
	used[i][j] = 0;
}
void inp()
{
	cin >> k >> m >> n;
	res.clear(); s.clear();
	for(int i = 0; i < k; i++)	cin >> dic[i];
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> c[i][j];
		}
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			Try(i, j, s);
	}
	if(res.size() == 0) cout << -1 << endl;
	else 
	{
		for(string x : res)
			cout << x << " ";
		cout << endl;
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
	}
	return 0;
}

