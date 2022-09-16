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
int pri(char x){
	if(x == '*' || x == '/') return 2;
	if(x == '+' || x == '-') return 1;
	return 0;
}
ll calc(ll a, ll b, char x){
	if(x == '*') return a*b;
	if(x == '/') return a/b;
	if(x == '+') return a+b;
	return a-b;
}
string infixToPostfix(){
	s = "(" + s + ")";
	stack <char> st;
	int n = s.length();
	string ans = "", tmp;
	for(int i = 0; i < n; i++){
		if(s[i] == '(')
			st.push(s[i]);
		else if(isdigit(s[i])){
			ans.push_back(s[i]);
		}
		else{
			if(isdigit(ans.back())) ans.push_back('@'); // danh dau sau moi so deu co ki tu @
			if(s[i] == ')'){
				while(!st.empty() && st.top() != '('){
					ans.push_back(st.top()); st.pop();
				}
				st.pop();
			}
			else{
				while(!st.empty() && pri(st.top()) >= pri(s[i])){
					ans.push_back(st.top()); st.pop();
				}
				st.push(s[i]);
			}
		}
	}
	return ans;
}
ll calcPostfix(string a){
	stack <ll> st;
	ll tmp = 0;
	for(int i = 0; i < a.length(); i++){
		if(isdigit(a[i])){
			tmp = 10*tmp + toint(a[i]);
		}
		else {
			if(a[i] == '@'){
				st.push(tmp);
				tmp = 0;
			}
			else{
				ll top1 = st.top(); st.pop();
				ll top2 = st.top(); st.pop();
				ll res = calc(top2, top1, a[i]);
//				cout << top2 << ' ' << top1 << " " << " " << a[i] << " " << res << endl;
				st.push(res);
			}
		}
	}
	return st.top();
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	cin.ignore();
	while(test--) {
		cin >> s;
		string convert = infixToPostfix();
//		cout << convert << endl;
		cout << calcPostfix(convert) << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/