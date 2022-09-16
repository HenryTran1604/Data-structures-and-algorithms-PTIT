#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int inc[n] = {0}, dec[n] = {0};
		
		for(int i = 1; i < n; i++)
		{
			if(a[i-1] < a[i])
			{
				inc[i] = inc[i-1]+1;
			}
//			cout << inc[i] << " ";
		}
		int ans = 0;
		for(int i = n-2; i >= 0; i--)
		{
			if(a[i] > a[i+1])
			{
				dec[i] = dec[i+1]+1;
			}
//			cout << dec[i] << " ";
		}
		for(int i = 0; i < n; i++)
			ans = max(inc[i] + dec[i] + 1, ans);
		cout << ans;
		cout << endl;
		
	}
	return 0;
}
