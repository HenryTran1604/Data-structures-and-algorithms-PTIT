#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s;
	stack <int> st;
	int q; cin >> q;
	while(q--)
	{
		cin >> s;
		if(s == "PUSH")
		{
			int x; cin >> x;
			st.push(x);
		}
		else if(s == "POP")
		{
			if(!st.empty())
				st.pop();
		}
		else
		{
			if(st.empty())
				cout << "NONE\n";
			else
				cout << st.top() << "\n";
			
		}
	}
	
	return 0;
}
/*Code by: Tran Quang Huy*/