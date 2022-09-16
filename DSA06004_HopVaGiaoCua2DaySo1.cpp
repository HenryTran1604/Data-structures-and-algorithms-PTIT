#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < m; i++)
			cin >> b[i];
		vector <int> uni, inter;
		set_union(a, a+n, b, b+m, inserter(uni, uni.begin()));
		for(int x : uni)
			cout << x << " ";
		cout << endl;
		
		set_intersection(a, a+n, b, b+n, inserter(inter, inter.begin()));
		for(int x : inter)
			cout << x << ' ';
		cout << endl;
	}
	return 0;
}

