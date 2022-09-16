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

struct state{
	char H[10];
	short step;
};

state TurnLeftSide(state a){
	state b;
	b.H[0] = a.H[3];
	b.H[1] = a.H[0];
	b.H[2] = a.H[2];
	b.H[3] = a.H[7];
	b.H[4] = a.H[4];
	b.H[5] = a.H[1];
	b.H[6] = a.H[6];
	b.H[7] = a.H[8];
	b.H[8] = a.H[5];
	b.H[9] = a.H[9];
	b.step = a.step+1;
	return b;
	
}
state TurnRightSide(state a){
	state b;
	b.H[0] = a.H[0];
	b.H[1] = a.H[4];
	b.H[2] = a.H[1];
	b.H[3] = a.H[3];
	b.H[4] = a.H[8];
	b.H[5] = a.H[5];
	b.H[6] = a.H[2];
	b.H[7] = a.H[7];
	b.H[8] = a.H[9];
	b.H[9] = a.H[6];
	b.step = a.step+1;
	return b;
}

bool check(state x){
	if(x.H[0] == '1' && x.H[1] == '2' && x.H[2] == '3' && x.H[3] == '8' && x.H[4] == '0' 
		&& x.H[5] == '0' && x.H[6] == '4' && x.H[7] == '7' && x.H[8] == '6' && x.H[9] == '5')
		return 1;
	return 0;
}
int solve(){
	state P; P.step = 0;
	for(int i = 0; i < 10; i++){
		cin >> P.H[i];
	}
	
	queue <state> q;
	q.push(P);
	while(!q.empty()){
		state top = q.front(); q.pop();
		if(check(top)){
			return top.step;
		}
		state a;
		a = TurnLeftSide(top);
		if(check(a)){
			return top.step+1;
		}
		q.push(a);
		a = TurnRightSide(top);
		if(check(a)){
			return top.step+1;
		}
		q.push(a);
	}
}
int main()
{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	while(t--){
		cout << solve() << endl;
	}
	return 0;
}
    

/*Code by: Tran Quang Huy*/