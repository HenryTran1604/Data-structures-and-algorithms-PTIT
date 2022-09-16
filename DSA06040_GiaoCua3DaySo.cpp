#include <bits/stdc++.h>
using namespace std;
void nhap(long long a[], int n)
{
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m, p, ok = 0; cin >> n >> m >> p;
		long long a[n], b[m], c[p];
		nhap(a, n); nhap(b, m); nhap(c, p);
		int l1, l2, l3; l1 = l2 = l3 = 0;
		while(l1 < n && l2 < m && l3 < p)
		{
			if(a[l1] == b[l2] && b[l2] == c[l3])
			{
				ok = 1;
				cout << a[l1] << " ";
				l1++; l2++; l3++;
			}
			else if(a[l1] < b[l2]) l1++;
			else if(b[l2] < c[l3]) l2++;
			else l3++;
		}
		if(ok == 0) cout << -1;
		cout << endl;
	}
	return 0;
}

