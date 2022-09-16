#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int n, k, cnt, s;
int a[15];
void Try(int pos, int sum, int m){
	if(pos == n) return;
	sum += a[pos];
	if(sum == s/k){
		if(pos == n-1){
			if(m == k-1)
				cnt++;
		}
		else{
			Try(pos+1, 0, m+1);
			Try(pos+1, sum, m);
		}
	}
	else Try(pos+1, sum, m);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; test = 1;
	while(test--){
		cin >> n >> k; cnt = 0; s = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			s += a[i];
		}
		if(s%k == 1) cout << 0 << endl;
		else{
			Try(0, 0, 0);
			cout << cnt << endl;
		}
	}
	return 0;
}


/*Code by: Tran Quang Huy*/