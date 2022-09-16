#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a[6], id[6], x[5];
bool ok = 0, en;
int calc(int x, int y, int z)
{
	if(z == 1) return x+y;
	if(z == 2) return x-y;
	return x*y;
}
void check()
{
	ll res = a[id[1]];
	for(int i = 2; i <= 5; i++)
	{
		res = calc(res, a[id[i]], x[i-1]);
	}
//	cout << res << endl;
	if(res == 23)
	{
		ok = 1;
//		cout << a[id[1]] << " ";
//		for(int i = 2; i <= 5; i++)
//		{
//			cout << x[i] << " " << a[id[i]] << " ";
//		}
//		cout << endl;
	}
}
void Try(int i)
{
	for(int j = 1; j <= 3; j++)
	{
		x[i] = j;
		if(i == 4) check();
		else Try(i+1); 
	}
}
void sinhhoanvi()
{
	Try(1);
	int i = 4; 
	while(id[i] > id[i+1]) i--;
	if(i == 0) en = 1;
	else
	{
		int j = 5;
		while(id[j] < id[i]) j--;
		swap(id[i], id[j]);
		int c = i+1, d = 5;
		while(c < d)
		{
			swap(id[c], id[d]);
			c++; d--;
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		ok = 0; en = 0;
		for(int i = 1; i <= 5; i++)
		{
			cin >> a[i];
			id[i] = i;
		}
		while(en == 0 && ok == 0)
		{
			sinhhoanvi();
//			cout << ok << endl;
		}
		if(ok == 1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

