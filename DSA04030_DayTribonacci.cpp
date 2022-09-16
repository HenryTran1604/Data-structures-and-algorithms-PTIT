#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e15+7;
struct Matrix{
	ll t[4][4];
};
ll mult(ll a, ll b)
{
	ll ans = 0, i = 0;
	while(b > 0)
	{
		ll j = i, tmp = a*(b%10);
		while(j--)
		{
			tmp = (tmp*10)%mod;
		}
		ans = (ans + tmp)%mod;
		b/=10; i++;
	}
	return ans;
}
Matrix operator * (Matrix a, Matrix b)
{
	Matrix c;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			c.t[i][j] = 0;
			for(int k = 0; k < 4; k++)
			{
				c.t[i][j] = (c.t[i][j] + mult(a.t[i][k]%mod, b.t[k][j]%mod))%mod;
			}
		}
	}
	return c;
}
Matrix PowerMatrixMod(Matrix a, int n)
{
	if(n==1)
		return a;
	Matrix x = PowerMatrixMod(a, n/2);
	if(n%2==0)
		return x*x;
	return a*x*x;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n == 0) cout << 0 << endl;
		else if(n == 1) cout << 1 ;
		else if(n == 2) cout << 3;
		else if(n == 3) cout << 6;
		else 
		{
			n--;
			Matrix a;
			a.t[0][0] = a.t[0][2] = a.t[1][1] = a.t[1][2] = a.t[1][3] = a.t[2][1] = a.t[3][2] = 1;
			a.t[0][1] = a.t[0][3] = a.t[1][0] = a.t[2][0] = a.t[2][2] = a.t[2][3] = a.t[3][0] = a.t[3][1] = a.t[3][3] = 0;
			ll P[4] = {1, 3, 2, 1};
			Matrix x = PowerMatrixMod(a, n);
			ll ans = 0;
			for(int i = 0; i < 4; i++)
			{
				ans = (ans + x.t[0][i]*P[i])%mod;
			}
			cout << ans;
		}
		cout << "\n";
		
	}
	return 0;
}

