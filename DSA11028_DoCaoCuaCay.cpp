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
int n; int const maxn = 1e5+1;
int used[maxn], maxHeight = 0;
vector <int> adj[maxn];
void inp(){
	cin >> n; maxHeight = 0;
	for(int i = 1; i <= n; i++)
		adj[i].clear();
	for(int i = 1; i < n; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(used, 0, sizeof(used));
}
void DFS(int u, int h){
	used[u] = 1;
	maxHeight = max(h, maxHeight);
	for(int v : adj[u]){
		if(!used[v]){
			DFS(v, h+1);
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
		inp();
		DFS(1, 0);
		cout << maxHeight << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/