#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	int max1 = a[0]*a[1]*a[n-1], max2 = a[n-3]*a[n-2]*a[n-1], max3 = a[0]*a[1], max4 = a[n-2]*a[n-1];
	cout << max(max(max1, max2), max(max3, max4));
	
}


