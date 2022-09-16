#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
long long powerMod(int a, long long b)
{
	if(b == 0) return 1;
	long long x = powerMod(a, b/2);
	if(b%2==0) return x*x%MOD;
	return a*(x*x%MOD)%MOD;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
//	int t; cin >> t;
	while(1)
	{
		int a; long long b; cin >> a >> b;
		if(a == 0 && b == 0)
			break;
		cout << powerMod(a, b) << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/