#include <bits/stdc++.h>
#define maxn 1000001
#define endl '\n'
using namespace std;
using ll = long long;
void solve(string s)
{
	stack <char> st;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == ')')
		{
			int ok = 1;
			char tp = st.top(); st.pop();
			while(tp !='(')
			{
				if(tp == '+'|| tp == '-'|| tp == '*' || tp == '/')
					ok = 0;
				tp = st.top(); st.pop();
			}
			if(ok == 1) 
			{
				cout << "Yes\n";
				return;
			}
		}
		else st.push(s[i]);
	}
	cout << "No\n";
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int test; cin >> test;
	cin.ignore();
	while(test--)
	{
		string s; getline(cin, s);
		solve(s);
	}
	return 0;
}
//3
//((a+b))
//(a + (b)/c)
//(a + b*(c-d))
/*Code by: Tran Quang Huy*/