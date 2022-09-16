#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int calc(string s){
	int n = s.length(), F[50] = {0};
	if(s[0] == '0') return 0;
	
	F[0] = 1; F[1] = 1;
	for(int i = 2; i <= n; i++){
		if(s[i-1] != '0') F[i] = F[i-1];
		if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
			F[i] = F[i] + F[i-2];
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
		string s; cin >> s;
		cout << calc(s) << endl;
	}
	return 0;
}


/*Code by: Tran Quang Huy*/