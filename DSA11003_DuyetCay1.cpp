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

void inpArr(int a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
int search(int a[], int x, int n){
	for(int i = 0; i < n; i++){
		if(a[i] == x)
			return i;
	}
	return -1;
}
void printPostOrder(int inOrder[], int preOrder[], int n){
	int root = search(inOrder, preOrder[0],  n);
	if(root != 0){
		printPostOrder(inOrder, preOrder + 1, root);
	}
	if(root != n-1){
		printPostOrder(inOrder + root + 1, preOrder + root + 1, n - root -1 );
	}
	cout << preOrder[0] << " ";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test = 1;
	cin >> test;
	while(test--)
	{
		int inOrder[1001], preOrder[1001];
		int n; cin >> n;
		inpArr(inOrder, n); inpArr(preOrder, n);
		printPostOrder(inOrder, preOrder, n);
		cout << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/