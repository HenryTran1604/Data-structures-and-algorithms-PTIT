#include <bits/stdc++.h>
using namespace std;
int n, k, a[20], b[20];
void in()
{
	for(int i = 1; i <= k; i++)
		cout << char('A' + a[i]-1);
	cout << endl;
}
void Try(int i)
{
	for(int j = a[i-1]+1; j <= n-k+i; j++)
	{
		a[i] = j;
		if(i == k)
			in();
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
		cin >> n >> k;
		Try(1);
	}
	return 0;
}
/*Code by: Tran Quang Huy*/