#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int calc(int n, int x, int y, int z){
	int F[105] = {0};
	F[1] = x;
	for(int i = 2; i <= n; i++){
		if(i%2 == 0)
			F[i] = min(F[i-1] + x, F[i/2] + z);
		else
			F[i] = min(F[i-1]+ x, F[(i+1)/2] + z + y);
	}
	return F[n];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		int n, x, y, z;
		cin >> n >> x >> y >> z;
		cout << calc(n, x, y, z) << endl;
	}
	return 0;
}


/*Code by: Tran Quang Huy*/