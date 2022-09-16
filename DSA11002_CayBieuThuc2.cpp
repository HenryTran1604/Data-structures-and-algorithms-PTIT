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
string s[1001];
int n;
bool isOperator(string x){
	if(x == "+" || x == "-" || x == "*" || x == "/")
		return true;
	return false;
}
int calc(int i){
	if(2*i+1 >= n && 2*i+2 >= n) return stoi(s[i]);
	int leftNode = calc(2*i+1);
	int rightNode = calc(2*i+2);
	if(s[i] == "+") return leftNode + rightNode;
	else if(s[i] == "-") return leftNode - rightNode;
	else if(s[i] == "*") return leftNode * rightNode;
	else if(s[i] == "/") return leftNode / rightNode;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test = 1;
	cin >> test;
	while(test--)
	{
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> s[i];
		}
		cout << calc(0) << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/