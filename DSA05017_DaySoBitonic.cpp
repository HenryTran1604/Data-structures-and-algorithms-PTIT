#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
void inp(int a[], int n)
{
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int inc[n], dec[n];
		for(int i = 0; i < n; i++)
		{
			inc[i] = a[i];
			for(int j = 0; j < i; j++)
			{
				if(a[j] < a[i])
				{
					inc[i] = max(inc[i], inc[j]+a[i]);
				}
			}
		}
		for(int i = n-1; i >= 0; i--)
		{
			dec[i] = a[i];
			for(int j = n-1; j > i; j--)
			{
				if(a[j] < a[i])
				{
					dec[i] = max(dec[i], dec[j]+a[i]);
				}
			}
		}
		int ans = 0;
		for(int i = 0; i < n; i++)
		{
			ans = max(ans, dec[i] + inc[i] - a[i]);
		}
		cout << ans << endl;
	}
	
	
}


