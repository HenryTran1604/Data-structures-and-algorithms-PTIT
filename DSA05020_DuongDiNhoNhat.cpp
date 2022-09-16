#include <bits/stdc++.h>
#define endl '\n'
#define toint(a) (int) a - '0'
using namespace std;
using pii = pair<int, int>;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int test; cin >> test;
	cin.ignore();
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
		S[0][0] = a[0][0];
		for(int i = 1; i < n; i++)
			S[i][0] = S[i-1][0] + a[i][0];
		for(int j = 1; j < m; j++)
			S[0][j] = S[0][j-1] + a[0][j];
		
		for(int i = 1; i < n; i++)
		{
			for(int j = 1; j < m; j++)
			{
				S[i][j] = a[i][j] + min({S[i-1][j], S[i][j-1], S[i-1][j-1]});
			}
		}
		cout << S[n-1][m-1] << endl;
	}
	return 0;
}
//1
//2 5
//2 3

/*Code by: Tran Quang Huy*/