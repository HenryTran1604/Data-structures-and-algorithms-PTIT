#include <bits/stdc++.h>
#define ll  long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		ll a[n];
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n);
		ll cnt = 0;
		for(int i = 0; i < n-2; i++)
		{
			for(int j= i+1; j < n-1; j++)
			{
				ll id = lower_bound(a+j+1, a+n, k - a[i] - a[j]) - a;
				cnt += (id - j - 1);
			}
		}
		cout << cnt;
		cout << endl;
	}
	return 0;
}



