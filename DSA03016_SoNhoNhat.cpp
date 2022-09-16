#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int S, D; 
void solve()
{
	cin >> S >> D;
	if(S > 9*D)
	{
		cout << -1 << endl;
		return;
	}
	if(S == 0)
	{
		cout << 0 << endl;
		return;
	}
	vector <int> v;
	int i = 9;
	while(D > 0)
	{
		if(S >= i)
		{
			S -= i;
			v.push_back(i);
			D--;
		}
		else i--;
	}
	reverse(v.begin(), v.end());
	int n = v.size(), j = 1;
	if(v[0] == 0)
	{
		v[0] = 1;
		while(v[j] == 0)
			j++;
		v[j]--;
	}
	for(int x : v)
		cout << x;
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int test; cin >> test;
	while(test--)
	{
		solve();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/