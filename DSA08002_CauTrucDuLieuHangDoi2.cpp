#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	string s;
	queue <int> q;
	while(t--)
	{
		cin >> s;
		if(s == "PUSH")
		{
			int x; cin >> x;
			q.push(x);
		}
		else if(s == "POP")
		{
			if(!q.empty())
				q.pop();
		}
		else
		{
			if(!q.empty())
				cout << q.front();
			else cout << "NONE";
			cout << "\n";
		}
	}
	return 0;
}
/*Code by: Tran Quang Huy*/