#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n], l = 0, r = n-1;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n);
		while(l < r)
		{
			cout << a[r] << ' ' << a[l] << " ";
			l++; r--;
		}
		if(n%2) cout << a[l];
		cout << endl;
	}
	return 0;
}

