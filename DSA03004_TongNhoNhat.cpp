#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		ll num1 = 0, num2 = 0;
		for(int i = 0; i < n; i++)
		{
			if(i%2==0) num1 = (num1*10ll + a[i]);
			else num2 = (num2*10ll + a[i]);
		}
		cout << num1 + num2 << endl;
	}
}


