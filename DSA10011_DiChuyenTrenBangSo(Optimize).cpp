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
int n, m, a[501][501];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
struct state{
	int x, y, w;
};
struct cmp{
	bool operator()(state a, state b){
		return a.w > b.w;
	}
};
void BFS(){
	priority_queue <state, vector <state>, cmp> q;
	q.push({1, 1, a[1][1]});
	a[1][1] = -1;
	while(!q.empty()){
		state t = q.top(); q.pop();
		int x = t.x, y = t.y, w = t.w;
		if(x == n && y == m){
			cout << w << endl;
			return;
		}
		for(int i = 0; i < 4; i++){
			int x1 = x + dx[i], y1 = y + dy[i];
			if(x1 > 0 && x1 <= n && y1 > 0 && y1 <= m && a[x1][y1] != -1){
				q.push({x1, y1, w + a[x1][y1]});
				a[x1][y1] = -1;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test = 1;
	cin >> test;
	while(test--)
	{
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		BFS();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/