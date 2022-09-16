#include <bits/stdc++.h>
using namespace std;
int n, k, a[20], id[20];
void inp()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a+1, a+n+1);
}
void print()
{
	for(int i = 1; i <= k; i++)
		cout << a[id[i]] << " ";
	cout << endl;
}
void Try(int i)
{
	for(int j = id[i-1]+1; j <= n-k+i; j++)
	{
		id[i] = j;
		if(i == k)
			print();
		else Try(i+1);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		inp();
		Try(1);
	}
	return 0;
}
