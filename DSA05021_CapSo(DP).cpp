#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
bool cmp(pair <int, int> a, pair <int, int> b)
{
	return a.first < b.first;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector <pair <int, int>> v;
		for(int i = 0; i < n; i++)
		{
			int x, y; cin >> x >> y;
			v.push_back({x, y});
		}
		sort(v.begin(), v.end(), cmp);
		int L[n] = {0}, ans = 0;
		for(int i = 0; i < n; i++)
		{
			L[i] = 0;
			for(int j = 0; j < i; j++)
			{
				if(v[j].second < v[i].first)
				{
					L[i] = max(L[i], L[j]+1);
				}
			}
			ans = max(L[i], ans);
		}
		cout << ans+1 << endl;
	}
	
	return 0;
}

/*Code by: Tran Quang Huy*/