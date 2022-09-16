#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		set <char> s;
		for(int i = 0; i < n; i++)
		{
			string str; cin >> str;
			s.insert(str.begin(), str.end());
		}
		for(char x : s)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
