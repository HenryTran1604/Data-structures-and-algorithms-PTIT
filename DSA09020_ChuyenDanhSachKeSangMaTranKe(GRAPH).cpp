#include <bits/stdc++.h>
using namespace std;
int n, a[1001][1001];
void solve()
{
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++)
	{
		string s, num;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> num)
		{
			if(i < stoi(num))
			{
				a[i][stoi(num)] = a[stoi(num)][i] = 1;
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
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