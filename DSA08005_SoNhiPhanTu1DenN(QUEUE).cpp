#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue <string> q;
		q.push("1");
		while(n--)
		{
			string x = q.front(); q.pop();
			cout << x << " ";
			q.push(x+"0");
			q.push(x+"1");
		}
		cout << "\n";
	}
	return 0;
}
/*Code by: Tran Quang Huy*/