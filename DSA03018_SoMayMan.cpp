#include <bits/stdc++.h>
#define maxn 1000001
#define endl '\n'
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int cnt4 = 0, cnt7 = 0, res4 = 1e9, res7 = 1e9;
		for(int i = 0; i <= n/4; i++)
		{
			if((n - 4*i)%7 == 0)
			{
				cnt4 = i; cnt7 = (n-4*i)/7;
				if(cnt4 + cnt7 < res4 + res7)
				{
					res4 = cnt4; res7 = cnt7;
				}
			}
		}
		if(res4*4 + res7*7 == n)
		{
			for(int i = 0; i < res4; i++) cout << 4;
			for(int i = 0; i < res7; i++) cout << 7;
		}
		else cout << -1;
		cout << endl;

	}
	return 0;
}

/*Code by: Tran Quang Huy*/