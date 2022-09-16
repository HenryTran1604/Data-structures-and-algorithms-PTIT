#include <bits/stdc++.h>
using namespace std;
int n, a[20], mark[20] = {};
void in()
{
	for(int i = 1; i <= n; i++)
		cout << a[i];
	cout << " ";
}
void Try(int j)
{
	for(int i = n; i >= 1; i--)
	{
		if(mark[i] == 0)
		{
			a[j] = i;
			mark[i] = 1;
			if(j == n) in();
			else Try(j+1);
			mark[i] = 0; 
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
		cout << endl;
	}
	return 0;
}
