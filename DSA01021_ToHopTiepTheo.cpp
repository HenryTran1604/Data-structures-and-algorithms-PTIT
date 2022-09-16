#include <bits/stdc++.h>
using namespace std;
int n, k, a[20], b[20];
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
	while(a[i] == n-k+i) i--;
	if(i == 0) cout << k << endl;
	else
	{
		a[i]++;
		for(int j = i+1; j <= k; j++)
			a[j] = a[i] + j - i;
		int cnt = 0;
		for(int j = 1; j <= k; j++)
		{
			//cout << a[j] << " ";
			if(binary_search(a+1, a+k+1, b[j]) == 1) cnt++;
		}
		cout << k - cnt << endl;
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
		sinh();
	}
	return 0;
}
