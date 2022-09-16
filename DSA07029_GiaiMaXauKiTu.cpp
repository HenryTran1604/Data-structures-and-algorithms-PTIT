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
void solve(){
	stack <string> st;
	int n = s.length();
	string tmp = "";
	for(int i = n-1; i >= 0; i--){
		if(s[i] == ']'){
			st.push("]");
		}
		else if(isalpha(s[i])){
			tmp.push_back(s[i]);
		}
		else {
			if(s[i] == '['){
				reverse(all(tmp));
				st.push(tmp);
				tmp.clear();
				i--;
			}
			string num = "", a = "", b = ""; int cnt = 0;
			while(isdigit(s[i])){
				num.push_back(s[i]);
				i--;
			}
			i++;
			reverse(all(num));
			if(num.size() == 0) cnt = 1;
			else cnt = stoi(num);
			while(!st.empty() && st.top() != "]"){
				a += st.top(); st.pop();
			}
			if(!st.empty()) st.pop(); // xoa dau ]
			while(cnt--){
				b += a;
			}
			st.push(b);
		}
	}
	while(!st.empty()){
		cout << st.top();
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
		solve();
	}
	return 0;
}

//)()))))()))((()))
/*Code by: Tran Quang Huy*/