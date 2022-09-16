#include <bits/stdc++.h>
using namespace std;
int n, s;
void solve()
{
	cin >> n >> s;
	vector <int> v;
	if(s > 9*n || n!= 1 && s == 0)
	{
		cout << -1 << " " << -1 << endl;
		return;
	}
	if(n == 1 && s == 0)
	{
		cout << 0 << " " << 0 << endl;
		return;
	}
	int i = 9, tmp = n;
	while(tmp > 0)
	{
		if(s >= i)
		{
			v.push_back(i);
			tmp--;
			s -= i;
		}
		else i--;
	}
	vector <int> v2(v.rbegin(), v.rend());
	if(v2[0] == 0)
	{
		v2[0] = 1;
		for(int i = 1; i < v.size(); i++)
			if(v2[i] != 0)
			{
				v2[i]--;
				break;
			}	
	}
	for(int x : v2) cout << x;
	cout << " ";
	for(int x : v) cout << x; 
}
int main()
{
	int t; t = 1;
	while(t--)
	{
		solve();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/