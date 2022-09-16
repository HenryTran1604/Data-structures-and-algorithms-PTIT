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
		set <int> se;
		while(n--){
			int n1, n2; char c; cin >> n1 >> n2 >> c;
			se.insert(n1);
			se.insert(n2);
			
		}
		for(int x : se){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/