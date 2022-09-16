#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
using ll = long long;
void inp(ll a[], int n)
{
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		ll a[n], b[n-1];
		inp(a, n); inp(b, n-1);
		ll id = -1;
		for(int i = 0; i < n-1; i++)
		{
			if(a[i] != b[i])
			{
				id = i+1;
				break;
			}
		}
		if(id == -1) id = n;
		cout << id << endl;
	}
	
	return 0;
}
