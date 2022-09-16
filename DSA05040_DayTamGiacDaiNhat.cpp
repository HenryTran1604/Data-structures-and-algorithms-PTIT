#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n], maxn = 0;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int inc[n], dec[n];
		memset(inc, 0, sizeof(inc));
		memset(dec, 0, sizeof(dec));
		inc[0] = 1;
		for(int i = 1; i < n; i++)
		{
			if(a[i] > a[i-1])
				inc[i] = inc[i-1]+1;
			else inc[i] = 1;
		}
		dec[n-1] = 1;
		for(int i = n-2; i >= 0; i--)
		{
			if(a[i+1] < a[i])
				dec[i] = dec[i+1]+1;
			else dec[i] = 1;
		}
		for(int i = 0; i < n; i++)
			maxn = max(dec[i]+inc[i]-1, maxn);
		cout << maxn << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/