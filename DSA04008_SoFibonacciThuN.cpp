#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
struct Matrix{
	long long f[2][2];
	Matrix();
};
Matrix::Matrix()
{
	f[0][0] = f[0][1] = f[1][0] = 1; f[1][1] = 0;
}
Matrix operator * (Matrix a, Matrix b)
{
	Matrix c;
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			c.f[i][j] = 0;
			for(int k = 0; k < 2; k++)
			{
				c.f[i][j] = (c.f[i][j] + a.f[i][k] * b.f[k][j])%mod;
			}
		}
	}
	return c;
}
Matrix powerMatrixMod(Matrix a, int n)
{
	if(n == 1)
		return a;
	Matrix x = powerMatrixMod(a, n/2);
	if(n%2==0)
		return x*x;
	return a*x*x;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		Matrix a;
		Matrix x = powerMatrixMod(a, n);
		cout << x.f[1][0] << endl;
	}
	return 0;
}
