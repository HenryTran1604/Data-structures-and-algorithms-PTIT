#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, a[25];
vector <string> v;
set <string> s;
void inp()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		string x; cin >> x;
		s.insert(x);
	}
	copy(s.begin(), s.end(), inserter(v, v.begin()));
	// hoac v.assign(s.begin(), s.end());
}
void print()
{
	for(int i = 1; i <= k; i++)
	{
		cout << v[a[i]-1] << " ";
//		cout << a[i] << ' ';
	}
	cout << endl;
}
void Try(int i)
{
	for(int j = a[i-1]+1; j <= v.size()-k+i; j++)
	{
		a[i] = j;
		if(i == k) print();
		else Try(i+1);
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; t = 1;
	while(t--)
	{
		
		inp();
		Try(1);
	}
	return 0;
}
