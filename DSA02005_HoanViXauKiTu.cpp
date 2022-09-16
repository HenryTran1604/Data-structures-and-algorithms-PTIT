#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		cout << s << " ";
		while(next_permutation(s.begin(), s.end()))
			cout << s << " ";
		cout << endl;
	}
	return 0;
}
