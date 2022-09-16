#include <bits/stdc++.h>
using namespace std;
int n, s, a[50], res;
void Try(int i, int sum, int x)
{
	if(sum > s || x > res) return;
	if(i == n)
	{
		if(sum == s) res = min(x, res);
		return;
	}
	Try(i+1, sum, x); // khong lay a[i]
	Try(i+1, sum + a[i], x+1); // lay a[i]
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> s;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		res = 1e9;
		Try(0, 0, 0);
		if(res == 1e9) cout << -1;
		else cout << res;
		cout << endl;
	}
	return 0;
}
