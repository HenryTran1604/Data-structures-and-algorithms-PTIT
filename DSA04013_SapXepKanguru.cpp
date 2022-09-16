#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n, dem = 0; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n, greater <int> ());
		int l = 0, r = n/2;
		while(l < n/2 && r < n)
		{
			if(a[l] >= 2*a[r])
			{
				dem++; l++; r++;
			}
			else r++;
		}
		cout << n - dem << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/