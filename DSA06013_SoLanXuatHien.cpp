#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		multiset <int> ms;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			ms.insert(x);
		}
		int cnt = ms.count(k);
		if(cnt == 0) cnt = -1;
		cout << cnt;
		cout << endl;
	}
	return 0;
}
