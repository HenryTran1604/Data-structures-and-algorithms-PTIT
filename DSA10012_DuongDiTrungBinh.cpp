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
vector <int> adj[105];
bool used[105];
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
}
int BFS(int u, int v){
	memset(used, 0, sizeof(used));
	queue <pii> q;
	q.push({u, 0});
	while(!q.empty()){
		pii top = q.front(); q.pop();
		if(top.ft == v){
			return top.sd;
		}
		for(int x : adj[top.ft]){
			if(!used[x]){
				if(x == v) return top.sd+1;
				used[x] = 1;
				q.push({x, top.sd+1});
			}
		}
	}
	return 0;
}
void solve(){
	int sum = 0, cnt = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i != j){
				int x = BFS(i, j);
				if(x != 0){
					sum += x;
					cnt++;
				}
			}
		}
	}
	printf("%.2lf\n", sum*1.0/cnt);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		inp();
		solve();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/