#include <bits/stdc++.h>
using namespace std;
int n, s, a[50], id[50];
vector <vector<int>> ans;
void inp()
{
	cin >> n >> s;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a+1, a+n+1);
}
void update(int len)
{
	vector <int> tmp;
	for(int i = 1; i < len; i++)
	{
		tmp.push_back(a[id[i]]);
	}
	ans.push_back(tmp);
}
void Try(int i, int sum, int cur)
{
	if(sum == s)
	{
		update(i);
		return;
	}
	for(int k = cur; k <= n; k++)
	{
		sum += a[k];
		id[i] = k;
		if(sum <= s)
			Try(i+1, sum, k);
		sum-= a[k];
	}
}
void solve()
{
	ans.clear();
	inp();
	Try(1, 0, 1);
	if(ans.size() == 0)
	{
		cout << -1 << endl;
		return;
	}
	cout << ans.size() << " ";
	for(auto x : ans)
	{
		cout << "{";
		for(int i = 0; i < x.size()-1; i++)
			cout << x[i] << ' ';
		cout << x.back() << "} ";
	}
	cout << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
