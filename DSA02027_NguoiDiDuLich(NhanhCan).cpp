#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[20][20], x[20], visited[20] = {0}, sum = 0, ans = INT_MAX, cmin = 1e9;
/*
	n thanh pho. n!
	3 thanh pho
	ans = INT_MAX
	1 2 3 1 => ans
	1 3 2 1  ... 
	1 2: 3 dong
	2 3: 4 dong
	1 3: 1 dong
	cmin = 1, cmin != 0;
	dang toi thanh i-1, chi phi sum. i i+1 ... n
	cmin*(n-i+1) + sum => chi gia su nho nhat dang theo 1 nhanh nay mà di het cac thanh pho
	ans <= cmin(n-i+1) + sum
	
*/
void Try(int i)
{
	for(int j = 2; j <= n; j++)
	{
		if(visited[j] == 0)
		{
			visited[j] = 1;
			x[i] = j;
			sum += a[x[i-1]][j];
			if(i == n)
			{
				if(sum+a[j][1] < ans) ans = sum + a[j][1];
			}
			// dang di den thanh phi i-1 => sum. n-i-1. cmin sum + (n-i+1)*cmin
			// 
			else if(sum+(n-i+1)*cmin < ans) Try(i+1);
			sum -= a[x[i-1]][j];
			visited[j] = 0;
		}
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; t = 1;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
				if(a[i][j] != 0 && cmin > a[i][j])
					cmin = a[i][j];
			}
		}
		x[1] = 1;
		Try(2);
		cout << ans << endl;
	}
	return 0;
}
