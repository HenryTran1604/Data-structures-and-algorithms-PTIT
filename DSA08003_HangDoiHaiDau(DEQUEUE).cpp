#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	string s;
	deque <int> q;
	while(t--)
	{
		cin >> s;
		if(s == "PUSHFRONT")
		{
			int x; cin >> x;
			q.push_front(x);
		}
		else if(s == "PRINTFRONT")
		{
			if(!q.empty())
				cout << q.front();
			else cout << "NONE";
			cout << "\n";
		}
		else if(s == "POPFRONT")
		{
			if(!q.empty())
				q.pop_front();
		}
		else if(s == "PUSHBACK")
		{
			int x; cin >> x;
			q.push_back(x);
		}
		else if(s == "PRINTBACK")
		{
			if(!q.empty())
				cout << q.back();
			else cout << "NONE";
			cout << "\n";
		}
		else
		{
			if(!q.empty())
				q.pop_back();
		}
		
	}
	return 0;
}
/*Code by: Tran Quang Huy*/