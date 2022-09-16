#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		map <int, int> mp;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		int value = -1;
		for(int i = 0; i < n; i++)
		{
			if(mp[a[i]] > 1)
			{
				value = a[i];
				break;
			}
		}
		if(value == -1)
			cout << "NO\n";
		else cout << value << endl;
	}
	return 0;
}
