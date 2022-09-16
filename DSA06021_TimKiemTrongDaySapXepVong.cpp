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
		int n, x; cin >> n >> x;
		int a[n];
		int id = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i-1] > a[i])	id = i;
		}
		cout << abs(BinarySearch(a, x, 0, id)*BinarySearch(a, x, id, n))+1;
		cout << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/
