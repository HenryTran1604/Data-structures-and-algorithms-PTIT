#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int maxn = 0;
		int L[n];
		for(int i = 0; i < n; i++)
		{
			L[i] = 0;
			for(int j = 0; j < i; j++)
			{
				if(a[j] <= a[i])
				{
					L[i] = max(L[i], L[j]+1);
				}
			}
			maxn = max(maxn, L[i]);
		}
		cout << n - maxn-1 << endl;
	}
	return 0;
}
