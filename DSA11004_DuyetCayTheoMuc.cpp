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
		this->data = x;
		this->left = this->right = NULL;
	}
};
typedef struct Node* node;
void makeNode(node &root, int n1, int n2, char c){
	switch(c){
		case 'L':
			root->left = new Node(n2);
			break;
		case 'R':
			root->right = new Node(n2);
			break;
	}
	
}
void insert(node &root, int n1, int n2, char c){
	if(root == NULL){
		return;
	}
	if(root->data == n1)
		makeNode(root, n1, n2, c);
	else{
		insert(root->left, n1, n2, c);
		insert(root->right, n1, n2, c);
	}
}
void levelOrder(node root){
	queue <node> q;
	q.push(root);
	while(!q.empty()){
		node top = q.front(); q.pop();
		cout << top->data << " ";
		if(top->left != NULL) q.push(top->left);
		if(top->right != NULL) q.push(top->right);
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
		int n; cin >> n;
		node root = NULL;
		while(n--){
			int n1, n2; char c;
			cin >> n1 >> n2 >> c;
			if(!root){ // root = NULL
				root = new Node(n1); // tao node dau tien
				makeNode(root, n1, n2, c);
			}
			else insert(root, n1, n2, c);
		}
		levelOrder(root);
	}
	return 0;
}

/*Code by: Tran Quang Huy*/