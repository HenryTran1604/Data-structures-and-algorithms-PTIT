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
	Ton tai chu trinh euler neu: tat ca cac ban bac ra bang ban bac vao
	ton tai duong di euler neu: chi co 2 dinh thoa man deg+[u] - deg-[u] = deg+[v] - deg-[v] = 1;
								cac dinh khac deg+[s] = deg-[s]
*/
int n, m;
list <int> adj[maxn];
int degIn[maxn], degOut[maxn];
void inp(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	ms(degIn); ms(degOut);
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		degIn[y]++;
		degOut[x]++;
	}
}
void check(){
	for(int i = 1; i <= n; i++){
		if(degIn[i] != degOut[i]){
			cout << 0 << endl;
			return;
		}
	}
	cout << 1 << endl;
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