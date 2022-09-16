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
int n, m, s;
vector <pii> adj[1001];
void inp(){
	cin >> n >> m >> s;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	for(int i = 0; i < m; i++){
		int x, y, w; cin >> x >> y >> w;
		adj[x].push_back({y, w});
		adj[y].push_back({x, w});
	}
}
void dijkstra(int t){
	vector <int> d(n+1, INT_MAX);
	d[t] = 0;
	priority_queue <pii, vector<pii>, greater<pii>> q;
	q.push({0, t}); // trong so, dinh
	while(!q.empty()){
		pii top = q.top(); q.pop();
		int u = top.sd;
		int kc = top.ft;
		if(kc > d[u]) continue;
		for(auto it : adj[u]){
			int v = it.ft, w = it.sd;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
	}
	for(int i = 1; i <= n; i++){
		cout << d[i] << " ";
	}
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		inp();
		dijkstra(s);
	}
	return 0;
}

/*Code by: Tran Quang Huy*/