#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s;
	stack <int> st;
	while(cin >> s)
	{
		if(s == "push")
		{
			int x; cin >> x;
			st.push(x);
		}
		else if(s == "pop")
		{
			if(!st.empty())
				st.pop();
		}
		else
		{
			if(st.empty())
				cout << "empty\n";
			else
			{
				stack <int> tmp;
				while(!st.empty())
				{
					tmp.push(st.top()) ; st.pop();
				}
				while(!tmp.empty())
				{
					int x = tmp.top(); tmp.pop();
					cout << x << ' '; st.push(x);
				}
				cout << "\n";

			}
			
		}
	}
	
	return 0;
}
/*Code by: Tran Quang Huy*/