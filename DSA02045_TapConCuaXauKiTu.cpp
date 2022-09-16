#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
using ll = long long;
int n, b[17]; string s;
set <string> v;
void print()
{
	string tmp;
	for(int i = 1; i <= n; i++)
		if(b[i] == 1)
			tmp.push_back(s[i-1]);
	if(tmp.length())
		v.insert(tmp);
	
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		b[i] = j;
		if(i == n)
			print();
		else Try(i+1);
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		v.clear();
		cin >> n >> s;
		sort(s.begin(), s.end());
		Try(1);
		for(string x : v)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
