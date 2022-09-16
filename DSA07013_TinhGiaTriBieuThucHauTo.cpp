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
int calc(int a, int b, char sign){
	if(sign == '+') return a+b;
	if(sign == '-') return a-b;
	if(sign == '*') return a*b;
	return a/b;
}
void solve(){
	stack <int> st;
	
	for(int i = 0; i < s.length(); i++){
		if(isdigit(s[i])){
			st.push(s[i]-'0');
		}
		else{
			int top2 = st.top(); st.pop();
			int top1 = st.top(); st.pop();
			int res = calc(top1, top2, s[i]);
			st.push(res);
		}
	}
	cout << st.top() << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		cin >> s;
		solve();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/