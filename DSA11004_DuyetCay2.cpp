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
int n;
int inOrder[1005], levelOrder[1005], B[1005];

void postOrder(int d, int c){
	if(d > c) return;
	if(d == c) cout << inOrder[d] << " ";
	else{
		int x;
		for(int i = 1; i <= n; i++){
			if(B[levelOrder[i]] >= d && B[levelOrder[i]] <= c){
				x = i;
				break;
			}
		}
		x = B[levelOrder[x]];
		postOrder(d, x-1);
		postOrder(x+1, c);
		cout << inOrder[x] << " ";
	}
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
		for(int i = 1; i <= n; i++){
			cin >> inOrder[i];
			B[inOrder[i]] = i;
		}
		for(int i = 1; i <= n; i++){
			cin >> levelOrder[i];
		}
		
		postOrder(1, n);
		cout << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/