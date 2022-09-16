#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, s, a[21], cnt = 0;
void Try(int i)
{
	for(int j = a[i-1]+1; j <= n-k+i; j++)
	{
		a[i] = j;
		if(i==k)
		{
			int sum = 0;
			for(int p = 1; p <= k; p++)
				sum += a[p];
			if(sum == s) cnt++;
		}
		else Try(i+1);
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	int t; cin >> t;
	while(1)
	{
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0)
			break;
		Try(1);
		cout << cnt;
		cout << endl;
		cnt = 0;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/