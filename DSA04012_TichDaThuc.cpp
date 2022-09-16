#include <bits/stdc++.h>
using namespace std;
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
		int n, m, a[100], b[100], c[200] = {0};
		cin >> n >> m;
		inp(a, n); inp(b, m);
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				c[i+j] += a[i]*b[j];
			}
		}
		for(int i = 0; i < m+n-1; i++)
			cout << c[i] << " ";
		cout << endl;
	}
	return 0;
}
