#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;
int n, k, a[20];
void in()
{
	int cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == 1) cnt++;
	}
	if(cnt == k)
	{
		for(int i = 1; i <= n; i++)
			cout << a[i];
		cout << endl;
	}
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		a[i] = j;
		if(i == n) in();
		else Try(i+1);
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		Try(1);
	}
	return 0;
}

