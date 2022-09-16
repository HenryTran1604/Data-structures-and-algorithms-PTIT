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
int n, m, ok;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
char a[500][500];
pii st, en;
void inp(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			if(a[i][j] == 'S'){
				st = {i, j};
			}
			else if(a[i][j] == 'T'){
				en = {i, j};
			}
		}
	}
}
struct Move{
	int x, y, prev, turn;
};
void BFS(int st1, int st2){
	queue <Move> q;
	q.push({st1, st2, 4, 0});
	a[st1][st2] = '*';
	
	while(!q.empty()){
		Move top = q.front(); q.pop();
		int x = top.x, y = top.y;
//		cout << top.x << " " << top.y << " " << top.prev << " " << top.turn << endl;
		if(top.x == en.ft && top.y == en.sd){
			if(top.turn <= 2){
				ok = 1;
				return;
			}
		}
		for(int i = x+1; i < n && a[i][y] != '*'; i++){
			int tmp = top.turn;
			if(top.prev != 4 && 2 != top.prev) tmp++;
			a[i][y] = '*';
			q.push({i, y, 2, tmp});
		}
		for(int i = x-1; i >= 0 && a[i][y] != '*'; i--){
			int tmp = top.turn;
			a[i][y] = '*';
			if(top.prev != 4 && 0 != top.prev) tmp++;
			q.push({i, y, 0, tmp});
		}
		for(int j = y+1; j < m && a[x][j] != '*'; j++){
			int tmp = top.turn;
			a[x][j] = '*';
			if(top.prev != 4 && 1 != top.prev) tmp++;
			q.push({x, j, 1, tmp});
		}
		for(int j = y-1; j >= 0 && a[x][j] != '*'; j--){
			int tmp = top.turn;
			a[x][j] = '*';
			if(top.prev != 4 && 3 != top.prev) tmp++;
			q.push({x, j, 3, tmp});
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	while(test--){
		inp(); ok = 0;
		BFS(st.ft, st.sd);
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}
//1
//7 7
//*****..
//..S***T
//*..***.
//...**..
//**..**.
//**...*.
//.......
/*Code by: Tran Quang Huy*/