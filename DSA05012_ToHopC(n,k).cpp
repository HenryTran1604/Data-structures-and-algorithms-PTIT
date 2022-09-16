#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int c[1001][1001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	for(int i = 0; i <= 1000; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			if(j == 0 || j == i) c[i][j] = 1;
			else
			{
				c[i][j] = (c[i-1][j]%MOD + c[i-1][j-1]%MOD)%MOD;
			}
		}
	}
	while(t--)
	{
		int n, k; cin >> n >> k;
		cout << c[n][k] << endl;
	}
	
	
}


