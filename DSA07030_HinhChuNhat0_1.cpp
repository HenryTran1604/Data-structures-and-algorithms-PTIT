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
int calc(int n, int H[]){
	stack <int> st;
	int res = 0, i = 0;
	while(i < n){
		if(st.empty() || H[i] > H[st.top()]){
			st.push(i);
			i++;
		}
		else{
			int id = st.top(); st.pop();
			if(st.empty()) res = max(res, H[id]*i);
			else
				res = max(res, H[id]*(i - st.top() - 1)); 
		}
	}
	while(!st.empty()){
		int id = st.top(); st.pop();
		if(st.empty()) res = max(res, H[id]*i);
		else
			res = max(res, H[id]*(i - st.top() - 1));
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		int n, m; cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		int maxarea = 0;
		for(int i = 0; i < n; i++){
			int H[m];
			for(int j = 0; j < m; j++){
				
				if(a[i][j] && i){
					a[i][j] += a[i-1][j];
					
				}
				H[j] = a[i][j];
				
			}
			maxarea = max(maxarea, calc(m, H));
				
		}
		cout << maxarea << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/