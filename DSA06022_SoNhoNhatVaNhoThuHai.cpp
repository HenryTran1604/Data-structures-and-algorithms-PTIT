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
	return mid;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n], min1 = INT_MAX, min2 = INT_MAX;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] < min1)
			{
				min2 = min1;
				min1 = a[i];
			}
			else if(a[i] < min2)
			{
				min2 = a[i];
			}
		}
		if(min2 == min1) cout << -1;
		else cout << min1 << " " << min2;
		cout << endl;
	}
	return 0;
}
