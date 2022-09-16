#include <bits/stdc++.h>
using namespace std;
int a[20], n, k, mark[20] = {};
void in()
{
	for(int i = 1; i <= n; i++)
		cout << a[i];
	cout << " ";
}
void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(mark[j] == 0)
		{
			a[i] = j;
			mark[j] = 1;
			if(i == n) in();
			else Try(i+1);
			mark[j] = 0;
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
}
/*Code by: Tran Quang Huy*/
