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

	int test; cin >> test;
	while(test--)
	{
		string s; cin >> s;
		int maxlen = 1, n = s.length();
		for(int i = 0; i < n; i++){
			int l = i, r = i;
			while(l >= 0 && r < n && s[l] == s[r]){
				l--; r++;
			}
			maxlen = max(maxlen, r-l-1);
		}
		for(int i = 0; i < n-1; i++){
			int l = i, r = i+1;
			while(l >= 0 && r < n && s[l] == s[r]){
				l--; r++;
			}
			maxlen = max(maxlen, r-l-1);
		}
		cout << maxlen << endl;
	}
	return 0;
}


/*Code by: Tran Quang Huy*/