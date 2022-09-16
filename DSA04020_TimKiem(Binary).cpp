#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;
int BinarySearch(int *a, int T, int low, int high)
{
	if(low > high)
		return -1;
	int mid = (low + high)/2;
	if(a[mid] < T)
		return BinarySearch(a, T, mid+1, high);
	else if(a[mid] > T)
		return BinarySearch(a, T, low, mid-1);
	return 1;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, x; cin >> n >> x;
		int a[n] ;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << BinarySearch(a, x, 0, n);
		cout << endl;
	}
	return 0;
}
