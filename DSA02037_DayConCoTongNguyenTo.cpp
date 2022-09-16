#include <bits/stdc++.h>
using namespace std;
int n, k, a[20], id[20];
bool isprime(int);
void inp()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a+1, a+n+1, greater <int> ());
}
void check()
{
	int sum = 0;
	for(int i = 1; i <= n; i++)
		sum += a[i]*id[i];
	if(isprime(sum) == 1)
	{
		for(int i = 1; i <= n; i++)
			if(id[i] == 1)
				cout << a[i] << ' ';
		cout << endl;
	}
	
}
void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		id[i] = j;
		if(i == n)
			check();
		else Try(i+1);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		inp();
		Try(1);
	}
	return 0;
}
bool isprime(int n)
{
	if(n < 2) return 0;
	if(n < 4) return 1;
	if(n%2==0 || n%3==0)
		return 0;
	int tmp = sqrt(n);
	for(int i = 5; i <= tmp; i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;
}
