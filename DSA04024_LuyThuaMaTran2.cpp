#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int n, k;
struct Matrix{
	long long f[11][11];
};
Matrix operator * (Matrix a, Matrix b)
{
	Matrix c;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c.f[i][j] = 0;
			for(int k = 0; k < n; k++)
			{
				c.f[i][j] = (c.f[i][j] + a.f[i][k]*b.f[k][j])%MOD;
			}
		}
	}
	return c;
}
Matrix powerMatrixMod(Matrix a, int n)
{
	if(n == 1) return a;
	Matrix x = powerMatrixMod(a, n/2);
	if(n%2==0) return x*x;
	return a*x*x;
}
void Inp(Matrix &a)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a.f[i][j];
		}
	}
}
int main()
{
//    ios::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		Matrix a;
		Inp(a);
		Matrix x = powerMatrixMod(a, k);
		long long sum = 0;
		for(int i = 0; i < n; i++)
			sum = (sum + x.f[i][n-1])%MOD;
		cout << sum << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/