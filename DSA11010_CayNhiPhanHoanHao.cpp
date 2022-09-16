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
	if(c == 'L')
		root->left = new Node(n2);
	else 
		root->right = new Node(n2);
}

void insert(node &root, int n1, int n2, char c){
	if(root == NULL) return;
	if(root->data == n1){
		makeNode(root, n1, n2, c);
	}
	else{
		insert(root->left, n1, n2, c);
		insert(root->right, n1, n2, c);
	}
}

bool isPerfectBT(node root){
	queue <node> q;
	int cnt = 1;
	q.push(root);
	
	while(!q.empty()){
		if(cnt > q.size()) return 0;
		for(int i = 0; i < cnt; i++){
			node top = q.front(); q.pop();
			if(top->left != NULL) q.push(top->left);
			if(top->right != NULL) q.push(top->right);
		}
		cnt *= 2;
	}
	return 1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		node root = NULL;
		while(n--){
			int n1, n2; char c; cin >> n1 >> n2 >> c;
			if(root == NULL){
				root = new Node(n1);
				makeNode(root, n1, n2, c);
			}
			else insert(root, n1, n2, c);
		}
		if(isPerfectBT(root)) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}

/*Code by: Tran Quang Huy*/