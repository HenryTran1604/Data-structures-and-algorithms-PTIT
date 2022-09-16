#include <bits/stdc++.h>
#define ll  long long
using namespace std;
void check(ll a[], ll n, ll k)
{
	sort(a, a+n);
	for(int i = 0; i < n-2; i++)
	{
		for(int j = i+1; j < n-1; j++)
		{
			if(binary_search(a+j+1, a+n, k - a[i] - a[j]) == 1)
			{
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		ll a[n];
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
		}
		check(a, n, k);
	}
	return 0;
}



