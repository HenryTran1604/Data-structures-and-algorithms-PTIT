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
	int heso, somu;
	Node *next;
};
typedef struct Node* node;
node makeNode(int h, int s){
	node tmp = new Node();
	tmp->heso = h;
	tmp->somu = s;
	tmp->next = NULL;
	return tmp;
}
void addLast(node &a, int h, int s){
	node tmp = makeNode(h, s);
	if(a == NULL){
		a = tmp;
	}
	else{
		node p = a;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = tmp;
	}
}
void createPoly(node &Ax, string s){
	string token;
	stringstream SS(s);
	while(SS >> token){
		if(token == "+") continue;
//		cout << token << " ";
		int h = 0, so = 0, flag = 0;
		for(int i = 0; i < token.size(); i++){
			if(isdigit(token[i])){
				if(flag == 0){
					h = 10*h + token[i] - '0';
				}
				else so = 10*so + token[i] - '0';
			}
			else flag = 1;
		}
//		cout << h << " " << so << endl;
		addLast(Ax, h, so);
	}
}
void solve(){
	node Px = NULL, Qx = NULL;
	string s; getline(cin, s);
	createPoly(Px, s);
	getline(cin, s);
	createPoly(Qx, s);
	node Rx = NULL;
	while(Px != NULL && Qx != NULL){
			
		if(Px->somu > Qx->somu){
			addLast(Rx, Px->heso, Px->somu);
			Px = Px->next;
		}
		else if(Px->somu < Qx->somu){
			addLast(Rx, Qx->heso, Qx->somu);
			Qx = Qx->next;
		}
		else{
			addLast(Rx, Px->heso+Qx->heso, Px->somu);
			Px = Px->next; Qx = Qx->next;
		}
	}
	while(Rx->next != NULL){
		cout << Rx->heso << "*x^" << Rx->somu << " + ";
		Rx = Rx->next;
	}
	cout << Rx->heso << "*x^" << Rx->somu << endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	cin.ignore();
	while(test--)
	{
		solve();
	}
	return 0;
}
//1
//3*x^8 + 7*x^2 + 4*x^0
//11*x^6 + 9*x^2 + 2*x^1 + 3*x^0

/*Code by: Tran Quang Huy*/