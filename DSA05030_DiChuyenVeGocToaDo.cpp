#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll C[51][51];
	for(int i = 0; i <= 50; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			if(j == 0|| i == j)
			{
				C[i][j] = 1;
			}
			else C[i][j] = C[i-1][j] + C[i-1][j-1];
		}
	}
	int test; cin >> test;
	while(test--)
	{
		int n, m; cin >> n >> m;
		cout << C[n+m][m] << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/