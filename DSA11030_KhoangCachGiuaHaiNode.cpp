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
int n, m, used[1001];
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
}
int BFS(int x, int y){
	queue <pii> q;
	q.push({x, 0});
	used[x] = 1;
	while(!q.empty()){
		pii top = q.front(); q.pop();
		if(top.ft == y) return top.sd;
		for(int v : adj[top.ft]){
			if(!used[v]){
				used[v] = 1;
				q.push({v, top.sd+1});
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--){
		inp();
		int q; cin >> q;
		while(q--){
			int x, y; cin >> x >> y;
			memset(used, 0, sizeof(used));
			cout << BFS(x, y) << endl;
		}
	}
	return 0;
}

/*Code by: Tran Quang Huy*/