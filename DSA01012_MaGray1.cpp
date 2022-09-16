#include <bits/stdc++.h>
using namespace std;
int n, a[15];
void Convert()
{
	cout << a[1];
	for(int i = 2; i <= n; i++)
	{
		int tmp = a[i]^a[i-1];
		cout << tmp;
	}
	cout << " ";
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		a[i] = j;
		if(i == n)
			Convert();
		else Try(i+1);
	}
}
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1);
		cout << "\n";
	}
	return 0;
}
