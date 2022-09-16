#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		//insertion sort
		for(int i = 1; i < n; i++)
		{
			int j = i-1, key = a[i];
			while(j >= 0 && abs(a[j] - k) > abs(key-k))
			{
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = key;
		}
		for(int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
