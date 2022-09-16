#include <bits/stdc++.h>
using namespace std;
int n, s, p, k = 0;
vector <int> prime;
int a[200], b[200];
bool IsPrime(int);
vector <vector <int>> ans;
void MakePrimeArr()
{
	for(int i = 2; i <= 200; i++)
	{
		if(IsPrime(i))
			prime.push_back(i);
	}
}
void update()
{
	vector <int> tmp;
	for(int i = 1; i <= n; i++)
	{
		tmp.push_back(a[b[i]]);
	}
	ans.push_back(tmp);
//	cout << endl;
}
void Try(int i, int sum)
{
	for(int j = b[i-1]+1; j <= k-n+1; j++)
	{
		b[i] = j;
		if(sum+a[j] <= s)
		{
			sum += a[j];
//			cout << sum << " " << i << " " << n << endl;
			if(sum == s && i == n)
				update();
			else if(sum < s && i < n)
				Try(i+1, sum);
			sum -= a[j];
		}
//		if(i == n)
//			update();
//		else Try(i+1, 0);
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	MakePrimeArr();
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> p >> s; k = 1;
		ans.clear();
		for(int i = 0; i < prime.size(); i++)
		{
			if(prime[i] > p && prime[i] <= s)
				a[k++] = prime[i];
			else if(prime[i] > s)
				break;
		}
		Try(1, 0);
		cout << ans.size() << endl;
		for(auto x : ans)
		{
			for(int v : x)
				cout << v << " ";
			cout << endl;
		}
	}
	return 0;
}
bool IsPrime(int n)
{
	if(n < 2) return 0;
	if(n < 4) return 1;
	if(n%2==0 || n%3==0) return 0;
	int tmp = sqrt(n);
	for(int i = 5; i <= tmp; i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;
}
