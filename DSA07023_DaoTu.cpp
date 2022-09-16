#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{
	stack <string> st; string token;
	stringstream SS(s);
	while(SS >> token)
		st.push(token);
	while(!st.empty())
	{
		cout << st.top() << " "; st.pop();
	}
	cout << "\n";
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s; getline(cin, s);
		reverse(s);
	}
	return 0;
}
/*Code by: Tran Quang Huy*/