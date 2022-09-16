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
void calc(int n, int *H){
	stack <int> st;
	int i = 0, maxlen = 0;
	while(i < n){
		if(st.empty()||H[i] >= H[st.top()]){
			st.push(i++);
		}
		else{
			int idx = st.top(); st.pop();
			if(st.empty()){
				if(H[idx] <= i) maxlen = max(maxlen, H[idx]);
			}
			else{
				if(i-st.top()-1 >= H[idx])
					maxlen = max(maxlen, H[idx]);
			}
		}
	}
	while(!st.empty()){
		int idx = st.top(); st.pop();
		if(st.empty()){
			if(H[idx] <= i) maxlen = max(maxlen, H[idx]);
		}
		else{
			if(i-st.top()-1 >= H[idx])
				maxlen = max(maxlen, H[idx]);
		}
	}
	cout << maxlen << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		int H[n];
		for(int i = 0; i < n; i++){
			cin >> H[i];
		}
		calc(n, H);
	}
	return 0;
}

/*Code by: Tran Quang Huy*/