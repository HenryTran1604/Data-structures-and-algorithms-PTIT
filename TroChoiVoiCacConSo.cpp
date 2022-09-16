#include <bits/stdc++.h>
using namespace std;
int n, a[20];
bool used[20];
void check()
{
	for(int i = 2; i <= n; i++)
	{
		if(abs(a[i-1] - a[i]) == 1)
			return;
	}
	for(int i = 1; i <= n; i++)
		cout << a[i];
	cout << endl;
}
void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!used[j])
		{
			a[i] = j;
			used[j] = 1;
			if(i == n)
				check();
			else Try(i+1);
			used[j] = 0;
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1);
	}
	return 0;
}
