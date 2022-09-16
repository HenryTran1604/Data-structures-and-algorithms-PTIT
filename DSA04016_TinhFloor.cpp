#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
using ll = long long;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; ll x; cin >> n >> x;
		vector <ll> v;
		map <ll, int> mp;
		for(int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			mp[x] = i;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		if(v[0] > x)
		{
			cout << -1 << endl;
		}
		else
		{
			int id = upper_bound(v.begin(), v.end(), x) - v.begin();
			cout << mp[v[id-1]]+1 << endl;
		}
		
	}
	
	return 0;
}
