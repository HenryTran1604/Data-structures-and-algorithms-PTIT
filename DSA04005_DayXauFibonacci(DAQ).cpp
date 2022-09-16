#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll F[100];
char FibonacciWord(int n, ll k)
{
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= F[n-2]) return FibonacciWord(n-2, k);
	return FibonacciWord(n-1, k-F[n-2]);
}
int main()
{
	int t; cin >> t;
	F[0] = 0; F[1] = 1;
	for(int i = 2; i <= 92; i++)
		F[i] = F[i-1] + F[i-2]; 
	while(t--)
	{
		int n; ll k; cin >> n >> k;
		cout << FibonacciWord(n, k) << endl;
	}
	
	return 0;
}

/*Code by: Tran Quang Huy*/