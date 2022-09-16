#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
unsigned long long BintoDec(string s)
{
	unsigned long long res = 0, power = 1;
	for(int i = s.length()-1; i >= 0; i--)
	{
		res += (s[i] - '0')*power;
		power *= 2;
	}
	return res;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s1, s2; cin >> s1 >> s2;
		cout << BintoDec(s1)*BintoDec(s2) << endl;
	}
	return 0;
}
