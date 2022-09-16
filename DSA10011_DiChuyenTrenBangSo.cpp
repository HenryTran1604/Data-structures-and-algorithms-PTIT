#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
#define pdd pair <double, double>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int n, m, a[501][501], ans;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
void solve(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			
		}
	}
	vector <pii> adj[n*m+1];
	int ver = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			for(int k = 0; k < 4; k++){
				int x = i + dx[k], y = j + dy[k];
				if(x > 0 && x <= n && y > 0 && y <= m){
					adj[ver].push_back({m*(x-1)+y, a[x][y]});
				}
			}
			ver++;
		}
	}
	// dijkstra
	int d[n*m+1];
	for(int i = 1; i <= m*n; i++) d[i] = 1e7;
	priority_queue <pii, vector <pii>, greater <pii>> q;
	q.push({a[1][1], 1}); // kc, dinh
	d[1] = a[1][1];
	while(!q.empty()){
		pii top = q.top(); q.pop();
		int u = top.sd, kc = top.ft;
		if(kc > d[u]) continue;
		
		for(pii x : adj[u]){
			int v = x.ft, w = x.sd;
			if(d[v] > d[u] + w){
				d[v] = d[u]+w;
				q.push({d[v], v});
			}
		}
	}
	cout << d[n*m] << endl;
}
// dijkstra

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