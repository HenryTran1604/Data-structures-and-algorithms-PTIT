#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int n, k;
struct Matrix{
	long long f[11][11];
};
void inp(Matrix &a)
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a.f[i][j];
		}
	}
}
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
				c.f[i][j] = (c.f[i][j] + a.f[i][k]*b.f[k][j])%mod;
			}
		}
	}
	return c;
}
Matrix PowerMatrixMod(Matrix a, int n)
{
	if(n == 1)
		return a;
	Matrix x = PowerMatrixMod(a, n/2);
	if(n%2==0)
		return x*x;
	return a*x*x;
}
void print(Matrix a)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << a.f[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		Matrix a;
		inp(a);
		Matrix c = PowerMatrixMod(a, k);
		print(c);
	}
	return 0;
}
