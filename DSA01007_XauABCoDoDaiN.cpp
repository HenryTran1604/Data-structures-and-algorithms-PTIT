#include <bits/stdc++.h>
#define maxn 1e6
using ll = long long;
using namespace std;
int n, a[20];
void in()
{
	for(int i = 1; i <= n; i++)
		cout << char(a[i] + 'A');
	cout << " ";
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		a[i] = j;
		if(i == n) in();
		else Try(i+1);
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}


