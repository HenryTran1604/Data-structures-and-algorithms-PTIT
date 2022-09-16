#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
#define ms(a) memset(a, 0, sizeof(a))
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int maxn = 1001;
/*
	Ton tai chu trinh euler neu: tat ca cac dinh deu co bac chan
	ton tai duong di euler neu: chi co 2 dinh bac le
*/
int n, m;
list <int> adj[maxn];
int deg[maxn];
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		deg[i] = adj[i].size();
	}
}
void check(){
	int oddVer = 0, evenVer = 0;
	for(int i = 1; i <= n; i++){
		if(deg[i]%2!=0) oddVer++;
		else evenVer++;
	}
	if(evenVer == n) cout << 2;
	else if(oddVer == 2) cout << 1;
	else cout << 0;
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
		check();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/