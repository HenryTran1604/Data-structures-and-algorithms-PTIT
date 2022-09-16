#include <bits/stdc++.h>
using namespace std;
int n;
vector <pair<int, int>> v;
void solve()
{
	cin >> n;
	cin.ignore();
	string s, token;
	for(int i = 1; i <= n; i++)
	{
		getline(cin, s);
		stringstream sso(s);
		while(sso >> token)
		{
			if(i < stoi(token))
				v.push_back({i, stoi(token)});
		}
	}
	for(auto x : v)
		cout << x.first << " " << x.second << endl;
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