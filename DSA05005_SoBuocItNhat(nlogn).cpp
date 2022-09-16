#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

bool isprime(int);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	while(test--)
	{
		int n; cin >> n;
		int a[n], inc[n], maxlen = 0;
		for(int i = 0; i < n; i++)	cin >> a[i];
		vector <int> b(n+1, INT_MAX);
		b[0] = INT_MIN;
		for(int i = 0; i < n; i++){
			int k = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
			maxlen = max(maxlen, k);
			b[k] = a[i];
		}
		
		cout << n - maxlen<< endl;
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