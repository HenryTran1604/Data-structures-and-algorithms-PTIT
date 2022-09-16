#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
void solve(int *a, int n){
	stack <int> st; int L[n] = {};
	for(int i = 0; i < n; i++){
		while(!st.empty() && a[i] >= a[st.top()])
			st.pop();
		if(st.empty()) L[i] = i+1;
		else L[i] = i - st.top();
		st.push(i);
	}
	for(int i = 0; i < n; i++)
		cout << L[i] << " ";
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		solve(a, n);
	}
	return 0;
}


/*Code by: Tran Quang Huy*/