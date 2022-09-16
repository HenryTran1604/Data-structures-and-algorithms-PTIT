#include <bits/stdc++.h>
using namespace std;
bool solve(string s)
{
	stack <char> st;
	int n = s.length();
	for(int i = 0; i < n; i++)
	{
		if(s[i] == '('|| s[i] == '[' || s[i] == '{') st.push(s[i]);
		else
		{
			if(st.empty()) return 0;
			else if(st.top() == '(' && s[i] == ')') st.pop();
			else if(st.top() == '[' && s[i] == ']') st.pop();
			else if(st.top() == '{' && s[i] == '}') st.pop();
			else return 0;
		}
	}
	return st.empty();
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		if(solve(s)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
/*Code by: Tran Quang Huy*/