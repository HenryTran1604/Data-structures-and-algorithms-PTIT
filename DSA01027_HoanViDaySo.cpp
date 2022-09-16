#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t; t = 1;;
	while(t--)
	{
		int n; cin >> n;
		vector <int > v;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		do
		{
			for(int x : v)
				cout << x << " ";
			cout << endl;
		}
		while(next_permutation(v.begin(), v.end()));
	}
}
/*Code by: Tran Quang Huy*/
