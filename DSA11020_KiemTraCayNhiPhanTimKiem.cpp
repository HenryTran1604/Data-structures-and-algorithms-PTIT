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
		int check = 1, pre = -1;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			if(pre >= x) check = 0;
			pre = x;
		}
		cout << check << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/