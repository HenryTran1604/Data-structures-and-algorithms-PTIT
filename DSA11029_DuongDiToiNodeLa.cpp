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
int n, used[1001], par[1001], deg[1001];
vector <int> adj[1001];
void inp(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int i = 0; i < n-1; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		deg[i] = adj[i].size();
	}
}
void DFS(int u){
	used[u] = 1;
	for(int v : adj[u]){
		if(!used[v]){
			par[v] = u;
			DFS(v);
		}
	}
}
void reconstructionPath(int u, int v){
	stack <int> st;
	while(u != v){
		st.push(v);
		v = par[v];
	}
	st.push(u);
	while(!st.empty()){
		cout << st.top() << " "; st.pop();
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--){
		inp();
		memset(used, 0, sizeof(used));
		DFS(1);
		for(int i = 2; i <= n; i++){
			if(deg[i] == 1) { // node la
				reconstructionPath(1, i);
				cout << endl;
			}
		}
	}
	return 0;
}

/*Code by: Tran Quang Huy*/