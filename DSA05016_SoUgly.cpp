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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	ll U[10004], i = 1; 
	set <ll> se;
	se.insert(1);
	while(i < 1e4){
		ll top = *se.begin(); se.erase(top);
		U[i++] = top;
		se.insert(2*top);
		se.insert(3*top);
		se.insert(5*top);
	}
	while(test--)
	{
		int n; cin >> n;
		cout << U[n] << endl;
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