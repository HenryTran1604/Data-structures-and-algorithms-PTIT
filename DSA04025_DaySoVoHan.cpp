#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9+7;
struct Mat{
	ll f[2][2];
};
Mat operator * (Mat a, Mat b)
{
	Mat c;
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			c.f[i][j] = 0;
			for(int k = 0; k < 2; k++)
			{
				c.f[i][j] = (c.f[i][j] + a.f[i][k]*b.f[k][j])%MOD;
			}
		}
	}
	return c;
}
Mat Expose(Mat a, int n)
{
	if(n == 1) return a;
	Mat x = Expose(a, n/2);
	if(n%2==0) return x*x;
	return a*x*x;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		Mat a; a.f[0][0] = a.f[0][1] = a.f[1][0] = 1; a.f[1][1] = 0;
		Mat x = Expose(a, n);
		cout << x.f[1][0] << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/