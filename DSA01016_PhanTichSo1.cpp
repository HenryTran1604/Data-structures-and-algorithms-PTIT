#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[100];
void in(int len)
{
	cout << "(";
	for(int i = 1; i < len; i++)
		cout << a[i] << ' ';
	cout << a[len] << ") ";
}
void Try(int i, int j, int s)
{
	for(int k = j; k >= 1; k--)
	{
		if(s + k <= n)
		{
			a[i] = k;
			s += k;
			if(s == n) in(i);
			else Try(i+1, k, s);
			s -= k;
		}
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1, n, 0);
		cout << endl;
	}
	return 0;
}
