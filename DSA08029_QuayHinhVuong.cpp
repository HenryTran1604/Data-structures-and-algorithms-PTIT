#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

bool isprime(int);
struct state{
	short T[6];
	int step;
};
bool check(state a, state des){
	for(int i = 0; i < 6; i++){
		if(a.T[i] != des.T[i])
			return 0;
	}
	return 1;
}
void inp(state &a){
	for(int i = 0; i < 6; i++)
		cin >> a.T[i];
	a.step = 0;
}
state turnLeftSide(state a){
	state b;
	b.T[0] = a.T[3];
	b.T[1] = a.T[0];
	b.T[2] = a.T[2];
	b.T[3] = a.T[4];
	b.T[4] = a.T[1];
	b.T[5] = a.T[5];
	b.step = a.step+1;
	return b;
}
state turnRightSide(state a){
	state b;
	b.T[0] = a.T[0];
	b.T[1] = a.T[4];
	b.T[2] = a.T[1];
	b.T[3] = a.T[3];
	b.T[4] = a.T[5];
	b.T[5] = a.T[2];
	b.step = a.step+1;
	return b;
}
int solve(state src, state des){
	queue <state> q;
	q.push(src);
	while(!q.empty()){
		state top = q.front(); q.pop();
		if(check(top, des))
			return top.step;
		state TLS = turnLeftSide(top);
		if(check(TLS, des)) return top.step+1;
		q.push(TLS);
		state TRS = turnRightSide(top);
		if(check(TRS, des)) return top.step+1;
		q.push(TRS);	
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		state src, des;
		inp(src); inp(des);
		cout << solve(src, des) << endl;
		
	}
	return 0;
}
bool isprime(int n){
	if(n < 2) return 0;
	if(n < 4) return 1;
	if(n%2==0 || n%3==0) return 0;
	int tmp = sqrt(n);
	for(int i = 5; i <= tmp; i+=6){
		 if(n%i==0 || n%(i+2)==0) return 0;
	}
	return 1;
}

/*Code by: Tran Quang Huy*/