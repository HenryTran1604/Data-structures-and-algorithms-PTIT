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
int n, m, dH = 0;
int parent[101], size[101];
struct edge{
	int u, v, w;
};
vector <edge> e;
vector <edge> mst;
void make_set(){
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		size[i] = 1;
	}
}
int find(int v){
	if(v == parent[v]) return v;
	return parent[v] = find(parent[v]);
}
bool Union(int a, int b){
	a = find(a); b = find(b);
	if(a == b) return 0;
	if(size[a] < size[b])
		swap(a, b);
	parent[b] = a;
	size[a] += size[b];
	return 1;
}
void inp(){
	e.clear(); mst.clear();
	ms(parent); ms(size);
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y, z; cin >> x >> y >> z;
		e.push_back({x, y, z});
	}
}
bool cmp(edge a, edge b){
	return a.w < b.w;
}
void Kruskal(){
	dH = 0;
	stable_sort(e.begin(), e.end(), cmp);
	int ne = e.size();
	for(int i = 0; i < ne; i++){
		if(mst.size() == n-1) break;
		edge P = e[i];
		if(Union(P.u, P.v)){
			mst.push_back(P);
			dH += P.w;
		}
	}
	cout << dH << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--){
		inp();
		make_set();
		Kruskal();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/