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
string s;
/*
	gap ki tu si => push si vao stack(st)
	gap < => neu stack(st) khong rong => push st.top vao stack(tmp), st.pop
	gap > => neu stack(tmp) khong rong => push tmp.top vao stack
	gap - => beu stack(st) khong tong => st.pop
	sdafs<<<FGD>>DFD
	sdFGDafDFDs
*/
void solve(){
	cin >> s;
	int n = s.length();
	stack <char> st, tmp;
	for(int i = 0; i < n; i++){
		if(s[i] == '<'){
			if(!st.empty()){
				tmp.push(st.top()); st.pop();
			}
		}
		else if(s[i] == '>'){
			if(!tmp.empty()){
				st.push(tmp.top()); tmp.pop();
			}
		}
		else if(s[i] == '-'){  // '-'
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			st.push(s[i]);
		}
	}
	string ans = "";
	while(!st.empty()){
		ans.push_back(st.top()); st.pop();
	}
	reverse(all(ans));
	while(!tmp.empty()){
		ans.push_back(tmp.top()); tmp.pop();
	}
	cout << ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; test = 1;
	while(test--)
	{
		solve();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/