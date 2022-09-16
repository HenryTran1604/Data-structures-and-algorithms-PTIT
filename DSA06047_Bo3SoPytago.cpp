#include <bits/stdc++.h>
#define ll  long long
using namespace std;
void check(ll a[], int n)
{
	sort(a, a+n);
	for(int i = 0; i < n-2; i++)
	{
		for(int j = i+1; j < n-1; j++)
		{
			if(binary_search(a+j+1, a+n, a[i] + a[j]) != 0)
			{
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			a[i] = a[i]*a[i];
			
		}
		check(a, n);
	}
	return 0;
}


