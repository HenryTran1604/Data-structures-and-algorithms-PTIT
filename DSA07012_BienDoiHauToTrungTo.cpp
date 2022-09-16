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
void postfixToInfix(){
	int n = s.length();
	stack <string> st;
	for(int i = 0; i < n; i++){
		if(isalpha(s[i])){
			st.push(string(1, s[i]));
		}
		else{
			string top1 = st.top(); st.pop();
			string top2 = st.top(); st.pop();
			string tmp = "(" + top2 + s[i] + top1 + ")";
			st.push(tmp);
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
		postfixToInfix();
	}
	return 0;
}

/*Code by: Tran Quang Huy*/