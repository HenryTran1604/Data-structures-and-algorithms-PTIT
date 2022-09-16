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
		queue <string> q;
		stack <string> st;
		q.push("6"); q.push("8");
		while(!q.empty())
		{
			string x = q.front(); q.pop();
			if(x.length() > n)
			{
				break;
			}
			st.push(x);
			q.push(x+"6");
			q.push(x+"8");
		}
		while(!st.empty())
		{
			cout << st.top() << " "; st.pop();
		}
		cout << "\n";
	}
	return 0;
}
/*Code by: Tran Quang Huy*/