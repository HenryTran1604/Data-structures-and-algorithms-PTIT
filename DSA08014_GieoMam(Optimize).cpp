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
int n, m, a[501][501];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
struct state{
	int x, y, cnt;
};
void inp(queue <state> &q){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			if(a[i][j] == 2){
				q.push({i, j});
			}
		}
	}
}
void solve(){
	queue <state> q;
	inp(q);
	int ans = 0;
	while(!q.empty()){
		state top = q.front(); q.pop();
		int i = top.x, j = top.y, step = top.cnt;
		ans = max(ans, step);
		for(int k = 0; k < 4; k++){
			int i1 = i + dx[k], j1 = j + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 0 && j1 <= m && a[i1][j1] == 1){ // 
				q.push({i1, j1, step+1});
				a[i1][j1] = 2;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 1){
				cout << -1 << endl;
				return;
			}
		}
	}
	cout << ans << endl;
//	BFS(1, 1);
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