#include <bits/stdc++.h>
using namespace std;
int n, x, a[50], id[50], ok = 0;
void inp()
{
	cin >> n >> x;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a+1, a+n+1);
}
void Try(int i, int sum, int curr)
{
	for(int j = curr; j <= n; j++)
	{
		id[i] = j;
		if(sum + a[j] <= x)
		{
			sum += a[j];
			if(sum == x)
			{
				ok = 1;
				cout << '[';
				for(int k = 1; k < i; k++)
				{
					cout << a[id[k]] << " ";
				}
				cout << a[id[i]] << "] ";
			}
			else Try(i+1, sum, j);
			sum -= a[j];
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp(); ok = 0;
		Try(1, 0, 1);
		if(!ok) cout << -1;
		cout << endl;
	}
	return 0;
}
