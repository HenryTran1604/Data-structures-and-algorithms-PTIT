#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; test = 1;
	while(test--)
	{
		int n; cin >> n;
		map <int, int> mp;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]] = 1;
		}
		for(int i = 0; i < n; i++)
		{
			if(mp[a[i]] > 0)
				cout << a[i] << " ";
			mp[a[i]]--;
		}
	}
	return 0;
}


