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
int nodeLevel = 0;
struct Node{
	int data, level;
	Node *left, *right;
	Node(int x, int l){
		data = x; level = l;
		left = right = NULL;
	}
};
typedef struct Node* node;
void makeNode(node &root, int n1, int n2, char c){
	if(c == 'L')
		root->left = new Node(n2, root->level+1);
	else 
		root->right = new Node(n2, root->level+1);
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
bool check(node root){
	node left = root->left;
	node right = root->right;
	if(left == NULL && right == NULL){
		if(nodeLevel == 0)
			nodeLevel = root->level;
		else{
			if(nodeLevel != root->level)
				return 0;
		}
	}
	else {
		if(left != NULL && check(left) == 0) return 0;
		if(right != NULL && check(right) == 0) return 0;
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
		nodeLevel = 0;
		node root = NULL;
		int n; cin >> n;
		while(n--){
			int n1, n2; char c;
			cin >> n1 >> n2 >> c;
			if(root == NULL){
				root = new Node(n1, 0);
				makeNode(root, n1, n2, c);
			}
			else insert(root, n1, n2, c);
		}
		cout << check(root) << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/