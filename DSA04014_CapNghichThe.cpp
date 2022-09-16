#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
long long merge(long long a[], int l, int m, int r)
{
	int n1 = m-l+1, n2 = r-m, i, j, k;
	long long L[n1], R[n2];
	for(i = 0; i < n1; i++) L[i] = a[l+i];
	for(i = 0; i < n2; i++) R[i] = a[m+i+1];
	long long res = 0;
	i = 0; j = 0; k = l;
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j]) a[k++] = L[i++];
		else
		{
			a[k++] = R[j++];
			res = res + n1 - i;
		}
	}
	while(i < n1) a[k++] = L[i++];
	while(j < n2) a[k++] = R[j++];
	return res;
}
long long process(long long a[], int l, int r)
{
	long long res = 0;
	if(l < r)
	{
		int m = (l+r)/2;
		res = res + process(a, l, m);
		res = res + process(a, m+1, r);
		res = res + merge(a, l, m, r);
	}
	return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << process(a, 0, n);
		cout << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/