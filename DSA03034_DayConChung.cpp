#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
void inp(int a[], int n)
{
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n, m, k, ok = 0; cin >> n >> m >> k;
		int a[n], b[m], c[k];
		inp(a, n); inp(b, m); inp(c, k);
		int l1 = 0, l2 = 0, l3 = 0;
		while(l1 < n && l2 < m && l3 < k)
		{
			if(a[l1] == b[l2] && b[l2] == c[l3])
			{
				ok = 1;
				cout << a[l1] << " ";
				l1++; l2++; l3++;
			}
			else if(a[l1] > b[l2])
				l2++;
			else if(b[l2] > c[l3])
				l3++;
			else l1++;
		}
		if(ok == 0) cout << "NO";
		cout << "\n";
	}
	
}


