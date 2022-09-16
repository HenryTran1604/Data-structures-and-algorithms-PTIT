#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
using ll = long long;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n, k; cin >> n >> k;
		int val = 1;
		while(k%2==0)
		{
			k>>=1;
			val++;
		}
		cout << val << endl;
	}
	
	return 0;
}
