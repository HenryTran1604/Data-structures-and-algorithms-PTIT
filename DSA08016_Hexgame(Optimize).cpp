#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
#define toint(a) a-'0'
#define toch(a) a+'0'
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define endl '\n'
using namespace std;
using ll = long long;
string des = "1238004765";
struct state{
	string h; int step;
};
string TurnLeftSide(string a){
	string b = a;
	b[0] = a[3];
	b[1] = a[0];
	b[3] = a[7];
	b[5] = a[1];
	b[7] = a[8];
	b[8] = a[5];
	return b;
	
}
string RTurnLeftSide(string a){
	string b = a;
	b[3] = a[0];
	b[0] = a[1];
	b[7] = a[3];
	b[1] = a[5];
	b[8] = a[7];
	b[5] = a[8];
	return b;
	
}
string TurnRightSide(string a){
	string b = a;
	b[1] = a[4];
	b[2] = a[1];
	b[4] = a[8];
	b[6] = a[2];
	b[8] = a[9];
	b[9] = a[6];
	return b;
}
string RTurnRightSide(string a){
	string b = a;
	b[4] = a[1];
	b[1] = a[2];
	b[8] = a[4];
	b[2] = a[6];
	b[9] = a[8];
	b[6] = a[9];
	return b;
}
int solve(){
	string s;
	for(int i = 0; i < 10; i++){
		char x; cin >> x;
		s.push_back(x);
	}
	int ans = 1e9;
	queue <state> q;
	unordered_map <string, int> vis1;
	unordered_map <string, int> vis2;
	q.push({s, 0});
	vis1[s] = 1; // danh dau la da tham
	while(!q.empty()){
		state top = q.front(); q.pop();
		string str = top.h; int cnt = top.step;
		if(cnt == 13) continue;
		string a;
		a = TurnLeftSide(str);
		if(vis1[a] == 0){
			q.push({a, cnt+1});
			vis1[a] = cnt + 1;
		}
		a = TurnRightSide(str);
		if(vis1[a] == 0){
			q.push({a, cnt+1});
			vis1[a] = cnt + 1;
		}
	}
	// q bay gio rong
	q.push({des, 0});
	vis2[des] = 1;
	while(!q.empty()){
		state top = q.front(); q.pop();
		string str = top.h; int cnt = top.step;
		if(vis1[str] != 0){
			ans = min(ans, vis1[str] + cnt);
		}
		if(cnt == 13) continue;
		string a;
		a = RTurnLeftSide(str);
		if(vis2[a] == 0){
			q.push({a, cnt+1});
			vis2[a] = cnt + 1;
		}
		a = RTurnRightSide(str);
		if(vis2[a] == 0){
			q.push({a, cnt+1});
			vis2[a] = cnt + 1;
		}
	}
	return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while(t--){
		cout << solve() << endl;
	}
	return 0;
}
    



/*Code by: Tran Quang Huy*/