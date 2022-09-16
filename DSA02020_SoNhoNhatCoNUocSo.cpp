#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int n; ll ans;
int pr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void Try(int i, int SoUoc, ll res){
	if(SoUoc > n)
		return;
	if(SoUoc == n){
		ans = min(ans, res);
	}
	for(int j = 1; ; j++){
		if(res*pr[i] > ans) break;
		res *= pr[i];
		Try(i+1, SoUoc*(j+1), res);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		cin >> n;
		ans = 1e18;
		Try(0, 1, 1);
		cout << ans << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/