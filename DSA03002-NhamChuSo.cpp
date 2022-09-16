#include <bits/stdc++.h>
#define MAX 1001
using namespace std;
string convert(string src, char ch, char repl)
{
	for(int i = 0; i < src.length(); i++)
	{
		if(src[i] == ch)
			src[i] = repl;
	}
	return src;
}
int small(string a, string b)
{
	return stoi(convert(a, '6', '5')) + stoi(convert(b, '6', '5'));
}
int big(string a, string b)
{
	return stoi(convert(a, '5', '6')) + stoi(convert(b, '5', '6'));
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string a, b;
	cin >> a >> b;
	cout << small(a, b) << " " << big(a, b);
}

