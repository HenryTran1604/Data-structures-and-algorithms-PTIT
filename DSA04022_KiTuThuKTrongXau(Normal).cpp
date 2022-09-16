#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int cnt = 0;
		while(k%2==0)
		{
			cnt++;
			k >>= 1;
		}
		cout << char('A' + cnt) << endl;
	}
	return 0;
}
