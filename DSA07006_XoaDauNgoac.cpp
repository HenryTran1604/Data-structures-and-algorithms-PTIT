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
string s;
int len = 0, id[10], flag = 0;
stack <int> st;
vector <int> op, cl; // open, close
/*
	open: chi so cua cac dau mo ngoac
	close: chi so cua cac dau dong ngoac tuong ung voi open
*/
int mark[201]; // danh dau cac vi tri co ngoac
set <string> se;
void init(){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			st.push(i);
		}
		else if(s[i] == ')'){
			op.push_back(st.top());
			st.pop();
			cl.push_back(i);
		}
		mark[i] = 0; // danh dau tat ca cac vi tri deu co the duoc in ra
	}
	len = op.size();
}
void print(){
	if(flag == 0){
		flag = 1;
		return;
	}
	// id = 1 thi khong duoc in ra
	// id = 0 thi duoc in ra
	// neu id[i] == 1 thi danh dau ngoac tai vi tri open[i] khong duoc in ra
	// neu id[i] == 1 thi danh dau ngoac tai vi tri close[i] khong duoc in ra
	for(int i = 0; i < len; i++){
		mark[op[i]] = id[i];
		mark[cl[i]] = id[i];
	}
	string tmp;
	for(int i = 0; i < s.length(); i++){
		if(!mark[i]) tmp.push_back(s[i]);
	}
	se.insert(tmp);
}
void Try(int i){
	for(int j = 0; j < 2; j++){
		id[i] = j;
		if(i == len-1){
			print();
		}
		else Try(i+1);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> s;
	init();
	Try(0);
	for(string x : se){
		cout << x << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/