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
int a, b, c;
struct pos{
	int x, y, z;
};
pos s, t;
int dx[] = {0, 0, 0, 0, 1, -1};
int dy[] = {-1, 0, 1, 0, 0, 0};
int dz[] = {0, -1, 0, 1, 0, 0};
char sp[31][31][31];
void inp(){
	cin >> a >> b >> c;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			for(int k = 1; k <= c; k++){
				cin >> sp[i][j][k];
				if(sp[i][j][k] == 'S'){
					s.x = i; s.y = j; s.z = k;
				}
				else if(sp[i][j][k] == 'E'){
					t.x = i; t.y = j; t.z = k;
				}
			}
		}
	}
}
bool check(int x, int y, int z){
	if(x >= 1 && x <= a && y >= 1 && y <= b && z >= 1 && z <= c && sp[x][y][z] != '#'){
		return 1;
	}
	return 0;
}
int BFS(int u, int v, int w){
	queue <pair<pos, int>> q;
	q.push({s, 0});
	sp[u][v][w] = '#';
	
	while(!q.empty()){
		pair <pos, int> top = q.front(); q.pop();
		pos p = top.fi;
		if(p.x == t.x && p.y == t.y && p.z == t.z)
			return top.sec;
		for(int i = 0; i < 6; i++){
			int x = p.x + dx[i];
			int y = p.y + dy[i];
			int z = p.z + dz[i];
			if(check(x, y, z)){
				if(x == t.x && y == t.y && z == t.z) return top.sec+1;
				sp[x][y][z] = '#';
				q.push({{x, y, z}, top.sec+1});
			}
		}
	}
	return -1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while(t--){
		inp();
		cout << BFS(s.x, s.y, s.z) << endl;
	}
	return 0;
}

//2 3 4
//S..#
//..#.
//....
//
//.E..
//..#.
//.#..

/*Code by: Tran Quang Huy*/