#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;
int n, k;
string s;
void sinhNguoc()
{
	int i = s.length()-1;;
	while(s[i] == '0')
	{
		s[i] = '1';
		i--;
	}
	if(i >= 0) s[i] = '0';
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> s;
		sinhNguoc();
		cout << s << endl;
	}
	return 0;
}


/*Code by: Tran Quang Huy*/