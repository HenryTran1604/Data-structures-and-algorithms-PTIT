#include <bits/stdc++.h>
using namespace std;
int N, V, A[1001], C[1001], F[1001][1001];
void NhapMang(int a[])
{
	for(int i = 1; i <= N; i++)
	{
		cin >> a[i];
	}
}
void solve()
{
	for(int i = 0; i <= N; i++)
	{
		for(int j = 0; j <= V; j++)
		{
			if(i == 0 || j == 0)
				F[i][j] = 0;
			else
			{
				F[i][j] = F[i-1][j];
				if(j >= A[i])
				{
					F[i][j] = max(F[i][j], F[i-1][j-A[i]] + C[i]);
				}
			}
		}
	}
	cout << F[N][V] << endl;
}
int main()
{
	
	int t; cin >> t;
	while(t--)
	{
		cin >> N >> V;
		NhapMang(A); NhapMang(C);
		solve();
	}
	return 0;
}
