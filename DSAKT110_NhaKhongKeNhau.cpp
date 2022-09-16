#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test = 1;
	cin >> test;
	while(test--)
	{
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		ll f[n];
		f[0] = a[0], f[1] = max(a[0], a[1]);
		for(int i = 2; i < n; i++){
			f[i] = max(f[i-1], f[i-2] + a[i]);
		}
		cout << f[n-1] << endl;
	}
	return 0;
}

