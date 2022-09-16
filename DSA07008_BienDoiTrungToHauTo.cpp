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
int priority(char x){
	if(x == '^') return 5;
	if(x == '*' || x == '/' || x == '%') return 4;
	if(x == '+' || x == '-') return 3;
	return 2;
}
void infixToPostfix(){
	int n = s.length();
	stack <char> st;
	for(int i = 0; i < n; i++){
		if(s[i] == '('){
			st.push(s[i]);
		}
		else if(isalpha(s[i])){
			cout << s[i];
		}
		else if(s[i] == ')'){
			while(!st.empty() && st.top()!='('){
				cout << st.top(); st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() && priority(st.top()) >= priority(s[i])){
				cout << st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		if(st.top() != '(') cout << st.top();
		st.pop();
	}
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		cin >> s;
		infixToPostfix();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/