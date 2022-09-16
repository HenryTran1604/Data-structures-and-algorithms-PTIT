#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector <int> v(15);
vector <vector<int>> ans;
int n, k, a[15][15], sum = 0;
void inp()
{
	cin >> n >> k;
	v.clear(); v.push_back(0);
	for(int i = 1; i <= n; i++)
	{
		v.push_back(i);
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
}
void process()
{
	do
	{
		sum = 0;
		vector <int> tmp;
		for(int i = 1; i <= n; i++)
		{
			sum += a[i][v[i]];
			tmp.push_back(v[i]);
		}
		if(sum == k)
			ans.push_back(tmp);
		tmp.clear();
	}
	while(next_permutation(v.begin()+1, v.end()));
	cout << ans.size() << "\n";
	for(auto x : ans)
	{
		for(int v : x)
			cout << v << " ";
		cout << endl;
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; t = 1;
	while(t--)
	{
		inp();
		process();
	}
	return 0;
}
