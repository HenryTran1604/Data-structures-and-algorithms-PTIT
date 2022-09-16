#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int n, map <int, int> &mp)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
}
bool cmp(pair<int, int> a, pair <int, int> b)
{
	if(a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n]; map <int, int> mp;
		nhap(a, n, mp);
		vector <pair<int, int>> v(mp.begin(), mp.end());
		// x.second: tan suat
		// x.first: gia tri
		sort(v.begin(), v.end(), cmp);
		for(auto x : v)
		{
			while(x.second--)
				cout << x.first << " ";
		}
		cout << endl;
	}
	return 0;
}

