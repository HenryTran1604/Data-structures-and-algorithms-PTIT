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
int n, m;
vector <int> adj[1001];
vector <pii> cyc;
bool used[1001];
int par[1001];
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		sort(all(adj[i]));
	}
	memset(used, 0, sizeof(used));
	memset(par, 0, sizeof(par));
	cyc.clear();
}
bool DFS(int u){
	used[u] = 1;
	for(int v : adj[u]){
		if(!used[v]){
			par[v] = u;
			if(DFS(v)) return 1;
		}
		else if(v != par[u]){
			if(v == 1){
				cyc.push_back({v, u});
				return 1;
			}
		}
	}
	return 0;
}
void solve(){
	if(DFS(1)){
		int s = 1, t = cyc.front().sd;
		vector <int> path;
		path.push_back(1);
		while(s != t){
			path.push_back(t);
			t = par[t];
		}
		path.push_back(s);
		reverse(all(path));
		for(int x : path){
			cout << x << " ";
		}
		cout << endl;
	}
	else cout << "NO\n";
}
int main()
{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		inp();
		solve();
	}
	return 0;
}
//2
//6 5
//1 2 1 4 2 5 4 5 3 6
//6 9
//1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

/*Code by: Tran Quang Huy*/