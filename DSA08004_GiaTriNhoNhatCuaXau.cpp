#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int k; cin >> k;
		string s; cin >> s;
		priority_queue <ll, vector<ll>> pq;
		ll a[26] = {0};
		for(int x : s)
			a[x-'A']++;
		for(int i = 0; i < 26; i++)
			if(a[i]) pq.push(a[i]);
		while(k-- && !pq.empty())
		{
			ll n = pq.top(); pq.pop();
			n--;
			if(n > 0) pq.push(n);
		}
		ll sum = 0;
		while(!pq.empty())
		{
			ll v = pq.top(); pq.pop();
			sum += v*v;
		}
		cout << sum << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/
/*Code by: Tran Quang Huy*/