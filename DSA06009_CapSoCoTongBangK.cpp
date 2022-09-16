#include <bits/stdc++.h>
#define ll  long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		ll a[n];
		map <ll, ll> mp;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		sort(a, a+n);
		ll cnt = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[i] != k - a[i])
				cnt += mp[a[i]]*mp[k-a[i]];
			else 
				cnt += mp[a[i]]*(mp[a[i]]-1)/2;
			mp[a[i]] = mp[k - a[i]] = 0;
		}
		cout << cnt << endl;
	}
	return 0;
}



