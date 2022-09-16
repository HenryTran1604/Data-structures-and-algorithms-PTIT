#include <bits/stdc++.h>
using namespace std;
string s;
void Convert()
{
	cout << s[0];
	for(int i = 1; i < s.length(); i++)
	{
		int tmp = (s[i]-'0')^(s[i-1]-'0');
		cout << tmp;
	}
	cout << "\n";
}

int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		cin >> s;
		Convert();
	}
	return 0;
}
