#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int L[n+1] = {0};
		L[1] = 1, L[0] = 1;
		for(int i = 2; i <= n; i++)
		{
			for(int j = i-1; j >= max(i-k, 0); j--)
			{
				L[i] = (L[i] + L[j])%MOD;
//				cout << j << " ";
			}
//			cout << endl;
		}
		cout << L[n] << endl;
	}
	return 0;
}
