#include <bits/stdc++.h> 
using namespace std; 
int check(string s)
{
	stack <int> st; int j; 
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == '(') st.push(i);
		else if(s[i] == ')')
		{
			j = st.top(); st.pop();
			if(i - j == 2) return 1;
			if(s[j+1] == '(' && s[i-1] == ')') return 1;
		}
	}
	return 0;
}
int main() { 
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s; getline(cin, s);
		if(check(s) == 1) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}


