#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int test; cin >> test;
	while(test--)
	{
		int n, m; cin >> n >> m;
		int a[n][m], S[n][m];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		// generate 1st row of S[][] is same as a[][]'s one
		for(int i = 0; i < m; i++)
			S[0][i] = a[0][i];
		// generate 1st col of S[][] is same as a[][]'s one
		for(int i = 0; i < n; i++)
			S[i][0] = a[i][0];
		// if a[i][j] = 1 ? S[i][j] = min(S[i-1][j], S[i][j-1], S[i-1][j-1]) + 1;
		// else S[i][j] = 0;
		int MaxLen = 0;
		for(int i = 1; i < n; i++)
		{
			for(int j = 1; j < m; j++)
			{
				if(a[i][j] == 1)
				{
					S[i][j] = min({S[i-1][j], S[i][j-1], S[i-1][j-1]}) +1;
					MaxLen = max(MaxLen, S[i][j]);	
				}
				else S[i][j] = 0;
			}
		}
		cout << MaxLen << endl;
	}
	return 0;
}


/*Code by: Tran Quang Huy*/