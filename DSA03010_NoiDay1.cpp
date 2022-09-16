#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		priority_queue <int, vector <int>, greater <int>> pq;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			pq.push(x);
		}
		long long res = 0;
		while(pq.size() >= 2)
		{
			long long x = pq.top(); pq.pop();
			long long y = pq.top(); pq.pop();
			long long sum = (x+y);
			pq.push(sum);
			res = res + sum;
		}
		cout << res << endl;
	}
}
/*Code by: Tran Quang Huy*/