#include <bits/stdc++.h>
using namespace std;
int n, k, id[50];
set <int> s;
vector <int> v;
void inp()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		s.insert(x);
	}
	s.insert(0);
	v.assign(s.begin(), s.end());
}
void print()
{
	for(int i = 1; i <= k; i++)
	{
		cout << v[id[i]] << " ";
	}
	cout << endl;
}
void Try(int i)
{
	for(int j = id[i-1]+1; j <= v.size()-k+i-1; j++)
	{
		id[i] = j;
		if(i == k)
			print();
		else Try(i+1);
	}
}
int main()
{
	inp();
	Try(1);
	return 0;
}
