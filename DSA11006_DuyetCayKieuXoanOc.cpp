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
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};
typedef struct Node* node;
void makeNode(node &root, int n1, int n2, char c){
	if(c == 'L'){
		root->left = new Node(n2);
	}
	else root->right = new Node(n2);
}

void insert(node &root, int n1, int n2, char c){
	if(root == NULL) return;
	if(root->data == n1)
		makeNode(root, n1, n2, c);
	else{
		insert(root->left, n1, n2, c);
		insert(root->right, n1, n2, c);
	}
}
void spiralOrder(node root){
	queue <node> q;
	int cnt = 0;
	q.push(root);
	while(!q.empty()){
		int n = q.size();
		stack <node> st;
		for(int i = 1; i <= n; i++){
			
			node t = q.front(); q.pop();
			cout << t->data << " ";
			if(cnt%2==1) {
				if(t->left != NULL) st.push(t->left); 
				if(t->right != NULL) st.push(t->right);
			}
			else{
				if(t->right != NULL) st.push(t->right); 
				if(t->left != NULL) st.push(t->left);
			}
		}
		while(!st.empty()){
			q.push(st.top()); st.pop();
		}
		cnt++;
	}
	cout << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		node root = NULL;
		while(n--){
			int n1, n2; char c;
			cin >> n1 >> n2 >> c;
			if(root == NULL){
				root = new Node(n1);
				makeNode(root, n1, n2, c);
			}
			else insert(root, n1, n2, c);	
		}
		spiralOrder(root);
	}
	return 0;
}

/*Code by: Tran Quang Huy*/