#include <bits/stdc++.h>
using namespace std;
void RadixSort(int a[], int n)
{
	int m = a[0], b[n] = {}, exp = 1;
	for(int i = 1; i < n; i++)
		m = max(m, a[i]);
	while(m/exp > 0)
	{
		int bucket[10] = {};
		for(int i = 0; i < n; i++)
		{
			bucket[(a[i]/exp)%10]++;
		}
		for(int i = 1; i < 10; i++)
		{
			bucket[i] += bucket[i-1];
		}
		for(int i = n-1; i >= 0; i--)
		{
			b[--bucket[(a[i]/exp)%10]] = a[i];
		}
		for(int i = 0; i < n; i++)
		{
			a[i] = b[i];
		}
		exp *= 10;
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		RadixSort(a, n);
		for(int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
