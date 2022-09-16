#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// kiem tra xem max1 doi xung min1, max2 doi xung min2 ...
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		int ok = 1;
		for(int i = 0; i < n/2; i++)
		{
			if(b[i] != a[i] && b[i] != a[n-1-i])
			{
				ok = 0;
				break;
			}
		}
		if(ok) cout << "Yes\n";
		else cout << "No\n";	
	}
	return 0;
}
/*Code by: Tran Quang Huy*/