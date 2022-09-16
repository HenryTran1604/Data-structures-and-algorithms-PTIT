#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;
int main()
{
	vector <int> v(maxn, 1);
	v[0] = v[1] = 0;
	for(ll i = 2; i < maxn; i++)
	{
		if(v[i] == 1)
		{
			for(ll j = i*i; j < maxn; j+=i)
				v[j] = 0;
		}
	}
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		bool logic = 0;
		for(int i = 0; i <= n/2; i++)
		{
			if(v[i] == 1 && v[n-i] == 1)
			{
				cout << i << " " << n-i;
				logic = 1;
				break;
			}
		}
		if(logic == 0)	cout << -1;
		cout << endl;
	}
	return 0;
}
/*Code by:Tran Quang Huy*/
