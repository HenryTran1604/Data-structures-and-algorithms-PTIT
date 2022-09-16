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

bool isTheSameBT(node root1, node root2){
	if(root1->data == root2->data){
		if(root1->left != NULL && root2->left != NULL)
			if(isTheSameBT(root1->left, root2->left) == 0)
				return 0;
		if(root1->right != NULL && root2->right != NULL)
			if(isTheSameBT(root1->right, root2->right) == 0)
				return 0;
	}
	else return 0;
	return 1;
}
void inp(node &root, int n){
	while(n--){
		int n1, n2; char c; cin >> n1 >> n2 >> c;
		if(root == NULL){
			root = new Node(n1);
			makeNode(root, n1, n2, c);
		}
		else insert(root, n1, n2, c);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		node root1 = NULL, root2 = NULL;
		inp(root1, n);
		int m; cin >> m;
		inp(root2, m);
		cout << isTheSameBT(root1, root2) << "\n";
	}
	return 0;
}

/*Code by: Tran Quang Huy*/