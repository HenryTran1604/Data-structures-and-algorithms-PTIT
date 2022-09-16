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
bool cmp(pii a, pii b){
	return (double) a.sd/a.ft > (double)b.sd/b.ft;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		int n, w; cin >> n >> w;
		vector <pii> items(n); // {khoi luong, gia tri}
		for(int i = 0; i < n; i++){
			cin >> items[i].sd >> items[i].ft;
		}
		sort(items.begin(), items.end(), cmp);
		double MaxVal = 0.0;
		for(int i = 0; i < n; i++){
			if(w >= items[i].ft){
				MaxVal += items[i].sd;
				w -= items[i].ft;
			}
			else{
				MaxVal += (double) w/items[i].ft*items[i].sd;
				break;
			}
		}
		printf("%.2lf\n", MaxVal);
	}
	return 0;
}

/*Code by: Tran Quang Huy*/