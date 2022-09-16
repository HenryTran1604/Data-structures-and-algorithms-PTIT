#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(vector <int> v, vector <int> des)
{
	int n = v.size();
	for(int i = 0; i < n; i++)
		if(v[i] != des[i])
			return 1;
	return 0;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int cnt = 0;
		vector <int> v, des;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			des.push_back(x);
			v.push_back(i+1);
		}
		do
			cnt++;
		while(cmp(v, des) && next_permutation(v.begin(), v.end()));
		cout << cnt << endl;
	}
	return 0;
}
/*Code by: Tran Quang Huy*/