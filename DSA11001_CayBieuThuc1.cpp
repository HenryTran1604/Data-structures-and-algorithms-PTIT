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
struct Node{
	char c;
	Node *left, *right;
	Node(char x){
		c = x;
		left = right = NULL;
	}
};
typedef struct Node* node;
void makeNode(node &root);//
void insert(node &root);
bool isOperand(char x){ // toan hang
	if(x == '+' || x == '-' || x == '*' || x == '/')
		return 0;
	return 1;
}
void LNR(node root){
	if(root == NULL) return;
	LNR(root->left);
	cout << root->c;
	LNR(root->right);
}
void solve(){
	string s; cin >> s;
	stack <node> st;
	for(int i = 0; i < s.length(); i++){
		if(isOperand(s[i])){
			st.push(new Node(s[i]));
		}
		else{
			node nd1 = st.top(); st.pop();
			node nd2 = st.top(); st.pop();
			node nd = new Node(s[i]);
			nd->left = nd2; nd->right = nd1;
			st.push(nd);
		}
	}
	node root = st.top();
	LNR(root);
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}

/*Code by: Tran Quang Huy*/