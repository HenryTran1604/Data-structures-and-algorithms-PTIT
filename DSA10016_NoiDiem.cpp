#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
#define pdd pair <double, double>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int n;

struct edge{
	int u, v; double w;
};
vector <edge> e;
double distance(pdd a, pdd b){
	return sqrt((a.ft - b.ft)*(a.ft - b.ft) + (a.sd - b.sd)*(a.sd - b.sd));
}
pdd ds[101];
bool cmp(edge a, edge b){
	return a.w < b.w;
}
// DSU
int par[101], sz[101];
void make_set(){
	for(int i = 1; i <= n; i++){
		par[i] = i;
		sz[i] = 1;
	}
}
int find(int v){
	if(v == par[v]) return v;
	return par[v] = find(par[v]);
}
bool Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b) return 0;
	if(sz[a] < sz[b]) swap(a, b);
	par[b] = a;
	sz[a] += sz[b];
	return 1;
}
void inp(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> ds[i].ft >> ds[i].sd;
	}
	e.clear();
	// create graph: Kruskal
	for(int i = 1; i <= n; i++){
		for(int j = i+1; j <= n; j++){
			e.push_back({i, j, distance(ds[i], ds[j])});
		}
	}
	
}
void kruskal(){
	make_set();
	
	stable_sort(e.begin(), e.end(), cmp);
	vector <edge> mst;
	int ne = e.size();
	double dH = 0.0;
	for(int i = 0; i < ne; i++){
		
		if(mst.size() == n-1) break;
		edge P = e[i];
		if(Union(P.u, P.v)){
			dH += P.w;
			mst.push_back(P);
		}
	}
	cout << fixed << setprecision(6) << dH << endl;
	
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		inp();
		kruskal();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/