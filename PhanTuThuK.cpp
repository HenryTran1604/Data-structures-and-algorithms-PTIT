#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
using ll = long long;
void inp(int a[], int n)
{
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int m, n, k; cin >> m >> n >> k;
		int a[m], b[n], val, l1 = 0, l2 = 0;
		inp(a, m); inp(b, n);
		while(k--)
		{
			if(a[l1] < b[l2])
			{
				val = a[l1];
				l1++;
			}
			else
			{
				val = b[l2];
				l2++;
			}
		}
		cout << val << endl;
	}
	
	return 0;
}
