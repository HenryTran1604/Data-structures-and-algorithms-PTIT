#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		long long cnt= 0, n; cin >> n;
		queue <long long> q;
		q.push(1LL);
		while(!q.empty())
		{
			
			long long x = q.front(); q.pop();
			if(x % n == 0)
			{
				cout << x << endl;
				break;
			}
			q.push(x*10+0ll);
			q.push(x*10+1ll);
		}
	}
	return 0;
}

/*Code by: Tran Quang Huy*/