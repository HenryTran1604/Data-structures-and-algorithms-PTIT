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
int n, m, par[100001], sz[100001], maxVal = 0;
void make_set(){
	maxVal = 0;
	for(int i = 1; i <= n; i++){
		par[i] = i;
		sz[i] = 1;
	}
}
int find(int v){
	if(v == par[v]) return v;
	return par[v] = find(par[v]);
}
void Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b) return;
	if(sz[a] < sz[b]) swap(a, b);
	par[b] = a;
	sz[a] += sz[b];
	maxVal = max(maxVal, sz[a]);
}
void solve(){
	cin >> n >> m;
	make_set();
	for(int i = 0;  i < m; i++){
		int x, y; cin >> x >> y;
		Union(x, y);
	}
	cout << maxVal << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		solve();
	}
	return 0;
}


/*Code by: Tran Quang Huy*/