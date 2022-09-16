#include <bits/stdc++.h>
using namespace std;
int findMinSteps(int n, int *a) // a[] de luu cac gia tri nho nhat
{
	if(n==1) return 0;
	if(a[n] != -1)
		return a[n];
	int ans = findMinSteps(n-1, a);
	if(n%2==0)
		ans = min(ans, findMinSteps(n/2, a));
	if(n%3==0)
		ans = min(ans, findMinSteps(n/3, a));
	a[n] = 1 + ans;
	return a[n];
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n+1];
		memset(a, -1, sizeof(a));
		findMinSteps(n, a);
		cout << a[n] << endl;
	}
	return 0;
}

