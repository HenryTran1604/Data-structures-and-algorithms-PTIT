#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int INF = 1e9+19;
int n, m, a[501][501], cnt[501][501], visited[501][501];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
struct state{
	int x, y, cnt;
};
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			cnt[i][j] = INF;
		}
	}
}
void BFS(int u, int v){
	queue <state> q;
	q.push({u, v, 0});
	cnt[u][v] = 0;
	visited[u][v] = 1;
	while(!q.empty()){
		state top = q.front(); q.pop();
		int i = top.x, j = top.y, step = top.cnt;
		for(int k = 0; k < 4; k++){
			int i1 = i + dx[k], j1 = j + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 0 && j1 <= m && a[i1][j1] == 1 && (cnt[i1][j1] > step + 1 || !visited[i1][j1])){ // 
				q.push({i1, j1, step+1});
				cnt[i1][j1] = step+1;
				visited[i1][j1] = 1;
			}
		}
	}
}
void solve(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 2){
				BFS(i, j);
			}
		}
	}
	int minDay = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 1){
				if(cnt[i][j] == INF){
					cout << -1 << endl;
					return;
				}
				else{
					minDay = max(minDay, cnt[i][j]);
				}
			}
		}
	}
	cout << minDay << endl;
//	BFS(1, 1);
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