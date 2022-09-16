#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	int a[n+5], ans = 0; a[0] = 0; 
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	vector <int> f(n+5, 0);
	for(int i = 1; i <= n; i++){
		f[a[i]] = f[a[i]-1]+1;
		ans = max(ans, f[a[i]]);
	}
	cout << n - ans << endl;
	return 0;
}

/*Code by: Tran Quang Huy*/