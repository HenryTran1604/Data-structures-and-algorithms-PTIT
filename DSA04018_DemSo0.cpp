#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
using ll = long long;
void inp(ll a[], int n, ll b[])
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[a[i]]++;
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		ll a[n], b[1001] = {0};
		inp(a, n, b); 
		cout << b[0] << endl;
	}
	
	return 0;
}
