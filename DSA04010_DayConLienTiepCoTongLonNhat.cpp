#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
using ll = long long;
void inp(int a[], int n)
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
		int a[n];
		inp(a, n);
		int sum = 0, ans  = 0;
		for(int i = 0;  i < n; i++)
		{
			sum = max(sum+a[i], a[i]);
			ans = max(ans, sum);
		}
		cout << ans << endl;
	}
	
	return 0;
}
