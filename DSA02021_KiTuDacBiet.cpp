#include <bits/stdc++.h>
using namespace std;
char Try(string s, long long n)
{
	long long len = s.length();
	if(n < len) return s[n];
	while(2*len <= n) len = len*2;
	if(len == n) return Try(s, n-1);
	return Try(s, n - len - 1);
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s;
		long long n; cin >> s >> n;
		cout << Try(s, n-1) << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/