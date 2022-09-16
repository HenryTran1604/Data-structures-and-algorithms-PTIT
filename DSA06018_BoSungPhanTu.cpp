#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[40005] = {}, L = maxn, R = 0;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			a[x]++;
			L = min(L, x);
			R = max(R, x);
		}
		int cnt = 0;
		for(int i = L; i <= R; i++)
		{
			if(a[i] == 0)
				cnt++;
		}
		cout << cnt;
		cout << endl;
	}
	return 0;
}
