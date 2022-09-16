#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, a[100], b[100], cnt = 0;
void inp()
{
	cin >> n >> k;
	for(int i = 1; i <= k; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
}
void sinh()
{
	int i = k;
	while(a[i] == n-k+i)
		i--;
	if(i == 0)
	{
		cout << k << endl;
	}
	else
	{
		a[i]++;
		for(int j = i+1; j <= k; j++)
			a[j] = a[j-1]+1;
		for(int j = 1; j <= k; j++)
		{
//			cout << a[j] << " ";
			if(binary_search(b+1, b+k+1, a[j]))
			{
				cnt++;
			}
		}
		cout << k - cnt << endl;
		cnt = 0;
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		inp();
		sinh();
	}
	return 0;
}
